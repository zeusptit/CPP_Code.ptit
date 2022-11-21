#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;cin >> n;
        int a[n];
        for(int &x:a)cin >> x;
        int min_val=0;
        for(int i=0;i<n;i++)min_val=max(a[i],min_val);
        int k=0;
        for(int i=0;i<n-1;i++)if(a[i]!=a[i+1])k=1;
        int cnt=0;
        for(int i=1;i<=min_val;i++)
        {
            int dem=0;
            int d = a[0] % i;
            for(int j=1;j<n;j++)
            {
                if(a[j] %i != d)break;
                else dem++;
            }
            if(dem==n-1)cnt++;
        }
        if(k==0)cout << 0 << endl;
        else cout << cnt << endl;
    }
}
/*

*/
