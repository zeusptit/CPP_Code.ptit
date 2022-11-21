#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int bS(int a[],int l,int r,ll x)
{
    while(l <= r)
    {
        int m = ( l + r) / 2;
        if(a[m] == x)return 1;
        if(a[m] > x)r = m - 1;
        else l = m + 1;
    }
    return 0;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++)cin >> a[i];
        sort(a,a + n);
        int kt = -1;
        for(int i=0;i<n;i++)
        {
            if(bS(a,1,n,x + a[i]))
            {
                kt = 1;
                break;
            }
        }
        cout << kt << endl;
    }
}
/*

*/
