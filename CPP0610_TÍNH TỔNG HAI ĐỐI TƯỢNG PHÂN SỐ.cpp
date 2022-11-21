#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

ll gcd(ll a,ll b)
{
    if(b == 0)return a;
    else return gcd(b,a % b);
}
ll lcm(ll a,ll b)
{
    return a / gcd(a,b) * b;
}

class PhanSo{
    private:
        ll tu,mau;
    public:
        PhanSo(ll tu,ll mau){
            this -> tu = tu;
            this -> mau = mau;
        }
        friend istream& operator >> (istream &in,PhanSo &a);
        friend ostream& operator << (ostream &out,PhanSo a);
        void rutgon()
        {
            ll temp = gcd(tu,mau);
            tu /= temp;
            mau /= temp;
        }
        friend PhanSo operator + (PhanSo a,PhanSo b);
};

istream& operator >> (istream &in,PhanSo &a)
{
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator << (ostream &out,PhanSo a)
{
    out << a.tu << "/" << a.mau;
    return out;
}

PhanSo operator + (PhanSo a,PhanSo b)
{
    PhanSo tong(1,1);
    ll mc = lcm(a.mau,b.mau);
    tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    tong.mau = mc;
    ll g = gcd(tong.tu,tong.mau);
    tong.tu /= g;tong.mau /= g;
    return tong;
}

int main() {
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}
