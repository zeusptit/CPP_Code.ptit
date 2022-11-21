#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

struct PhanSo{
    string nmr;
    string dmr;
};

void nhap (PhanSo &a)
{
    cin >> a.nmr >> a.dmr;
}

ll gcd(ll a,ll b)
{
    if(b == 0)return a;
    else return gcd(b,a % b);
}
void rutgon(PhanSo &a)
{
    ll x = stoll(a.nmr);
    ll y = stoll(a.dmr);
    ll temp = gcd(x,y);
    a.nmr = to_string(x / temp);
    a.dmr = to_string(y / temp);
}
 void in(PhanSo a)
 {
    cout << a.nmr << "/" << a.dmr;
 }
 
int main() {
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
