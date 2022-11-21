#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main()
{ 
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,m;
        cin >> n >> m;
        int a[100000-1],b[100000-1];
        for(int i=0;i<n;i++)cin >> a[i];
        for(int i=0;i<m;i++)cin >> b[i];
        sort(a,a+n);
        sort(b,b+m);
        cout << 1ll * a[n-1] * b[0]<<endl;
    }
}
/*

*/
