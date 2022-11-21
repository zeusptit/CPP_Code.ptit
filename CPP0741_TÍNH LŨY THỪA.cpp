#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main() {
    int test;
    cin >> test;
    while(test--)
    {
        int x,y;
        long p;
        cin >> x >> y >> p;
        ll res = 1;
        x %= p;
        for(int i=1;i<=y;i++)
        {
            res *= x;
            res %= p;
        }
        cout << res << endl;
    }
}
