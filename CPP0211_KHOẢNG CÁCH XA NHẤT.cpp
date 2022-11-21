#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int n,a[10000000];
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;cin >> n;
        vector<ll>m(n),N(n+1,INT_MIN);
        for(int i=0;i<n;i++)cin >> m[i];
        for(int i=n-1;i>=0;i--)N[i]=max(N[i+1],m[i]);
        int res=0;
        for(int i=0;i<n;i++)
        {
            int left=i+1,right=n-1,ans=i;
            while(left <= right)
            {
                int mid=(left+right)/2;
                if(m[i] <= N[mid])
                {
                    ans=max(ans,mid);
                    left=mid+1;
                }else{
                    right=mid-1;
                }
            }
            res=max(rs,ans-i);
        }
        cout << res << endl;
    }
}
/*

*/
