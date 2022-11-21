#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int a[1000001];
int main() {
    quick();
    int test;
    cin>>test;
    while(test--)
    {
        int n,q;
        cin >> n >>q;
        int a[n+1],b[n+1];
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            b[i]=b[i-1]+a[i];
        }
        while(q--)
        {
            int l,r;
            cin >> l >> r;
            cout << b[r]-b[l-1] << endl;
        }
    }
}
/*

*/
