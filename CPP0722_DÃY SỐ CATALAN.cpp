#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

string operator*(string a, int b) {
    if (a == "0" || b == 0)
        return "0";
    int n = a.length();
    string c(n, '0');
    int nho = 0;
    for (int i = n - 1; i >= 0; i--) {
        nho += (a[i] - '0') * b;
        c[i] = nho % 10 + '0';
        nho /= 10;
    }
    if (nho > 0)
        c = to_string(nho) + c;
    return c;
}
string catalan(int n) {
    vector <int> v;
    for (int i = n + 2; i <= 2 * n; i++) v.push_back(i);
    for (int i = 2; i <= n; i++) {
        int x = i;
        for (int j = 0; j < v.size() && x > 1; j++) {
            int d = __gcd(v[j], x);
            x /= d;
            v[j] /= d;
        }
    }
    string res = "1";
    for (int i = 0; i < v.size(); i++) res = res * v[i];
    return res;
}
int main(){
    quick();
    short int n; cin >> n;
    cout << catalan(n + 1) << endl;
}
/*

*/
