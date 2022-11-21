#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int binary_search(ll a[],int l,int r,ll s)
{
    if(l <= r)
    {
        int mid=(l + r) / 2;
        if(a[mid] == s)return mid;
        if(a[mid] > s)return binary_search(a,l,mid - 1,s);
        else return binary_search(a,mid + 1,r,s);
    }
    return -1;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;cin >> n;
        ll a[n];ll b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i] = a[i] * a[i];
        }
        sort(a,a + n);
        sort(b,b + n);
        int kt = 0;
        for(int i=0;i<n-1;i++)
        {
            if(kt == 1)break;
            for(int j=i+1;j<n;j++)
            {
                ll s = a[i] * a[i] + a[j] * a[j];
                if(binary_search(b,0,n - 1,s) != -1)
                {
                    kt = 1;
                    break;
                }
            }
        }
        if(kt)cout << "YES" << endl;else cout << "NO" << endl;
     }
}
/*
2
5
3 1 4 6 5
3
1 1 1
*/
