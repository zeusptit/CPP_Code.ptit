#include<bits/stdc++.h>
using namespace std; 

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
struct PhanSo{
      string tu,mau,sum;
};

void nhap (PhanSo &a)
{
      cin >> a.tu >> a.mau;
}

ll gcd(ll a,ll b)
{
    if(b == 0)return a;
    else return gcd(b,a%b);
}
void rutgon(PhanSo &a)
{
    ll x = stoll(a.tu);
    ll y = stoll(a.mau);
    ll temp = gcd(x,y);
    a.tu = to_string(x / temp);
    a.mau = to_string(y / temp);
}
PhanSo tong(PhanSo a,PhanSo b)
{
    rutgon(a),rutgon(b);
    ll x = stoll(a.tu),y = stoll(a.mau);
    ll z = stoll(b.tu),t = stoll(b.mau);
    ll lcm = y * t / gcd(y,t);
    x *= (lcm / y);z *= (lcm / t);
    x = x + z;y = lcm;
    a.tu = to_string(x);
    a.mau = to_string(y);
    rutgon(a);
    return a;
}
PhanSo tich(PhanSo a,PhanSo b)
{
    rutgon(a),rutgon(b);
    ll x = stoll(a.tu),y = stoll(a.mau);
    ll z = stoll(b.tu),t = stoll(b.mau);
    x = x * z;y = y * t;
    a.tu = to_string(x);
    a.mau = to_string(y);
    rutgon(a);
    return a;
}
void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

void process(PhanSo A,PhanSo B)
{
    PhanSo temp = tong(A,B);
    PhanSo C = tich(temp,temp);
    PhanSo D = tich(A,B);
    D = tich(D,C);
    in(C);
    cout << " ";
    in(D);
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}
