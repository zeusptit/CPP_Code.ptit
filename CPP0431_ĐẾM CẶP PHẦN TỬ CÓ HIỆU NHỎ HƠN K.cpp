#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int pos1(int a[],int l,int r,int x)
{
	  int res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] < x)
        {
            res = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return res;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        int a[100001];
        for(int i=0;i<n;i++)cin >> a[i];
        sort(a,a + n);
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            int p1 = pos1(a,i + 1,n - 1,k + a[i]);
            if(p1 != -1)
                ans += p1-i;
        }
        cout << ans << endl;
    }
}
/*

*/
