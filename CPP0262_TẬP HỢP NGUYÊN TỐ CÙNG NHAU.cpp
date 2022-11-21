#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        long n, m;
        cin >> n >> m;
        ll sum = n * (n + 1) / 2;
        ll x = (sum - m) / 2, y = (sum + m ) / 2;
        if(__gcd(x,y) == 1 && (sum + m) % 2 == 0)
            cout << "Yes\n";
        else cout << "No\n";
    }
}
/*

*/
