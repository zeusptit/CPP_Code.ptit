#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int mod=1000000007;
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;cin >> n;
        ll f[1001];
        f[0] = 0;
        f[1] = 1;
        for(int i=2;i<=n;i++)
        {
            f[i] = f[i - 1] % mod + f[i - 2] % mod;
            f[i] %= mod;
        }
        cout << f[n] << endl;
    }
}
/*

*/
