#include<bits/stdc++.h>
using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
struct PhanSo{
    string nmr,dmr,sum;
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
PhanSo tong(PhanSo a,PhanSo b)
{
    rutgon(a),rutgon(b);
    ll x = stoll(a.nmr),y = stoll(a.dmr);
    ll z = stoll(b.nmr),t = stoll(b.dmr);
    ll lcm =y * t /gcd(y,t);
    x *= (lcm / y);z *= (lcm / t);
    x = x + z;y = lcm;
    a.nmr = to_string(x);
    a.dmr = to_string(y);
    rutgon(a);
    return a;
}
void in(PhanSo a)
{
    cout << a.nmr << "/" << a.dmr;
}
 
int main() {
    struct PhanSo p,q;
    nhap(p); nhap(q);
    PhanSo t = tong(p,q);
    in(t);
    return 0;
}
