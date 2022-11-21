#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

ll gcd(ll a,ll b)
{
    if(b == 0)return a;
    else return gcd(b,a % b);
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

int main() {
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}
