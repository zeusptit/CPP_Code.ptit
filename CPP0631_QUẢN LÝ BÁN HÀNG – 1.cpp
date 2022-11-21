#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int a = 0, b = 0, c = 0;
class KH {
public:
    string mkh, tkh, gt, ns, dc;
    KH() {
        mkh = "";
        tkh = gt = ns = dc = "";
    }
};
class MH {
public:
    string mmh, tmh, dvt;
    int gm, gb;
    MH() {
        mmh = "MH";
        tmh = dvt = "";
        gb = gm = 0;
    }

};
KH kh[35];
MH mh[55];
class KhachHang {
public:
    string mkh, tkh, gt, ns, dc;
    KhachHang() {
        mkh = "KH";
        tkh = gt = ns = dc = "";
    }
    friend istream& operator>>(istream& in, KhachHang& X) {
        if (a == 0)cin.ignore();
        a++;
        X.mkh += (string(3 - to_string(a).length(), '0') + to_string(a));
        getline(in, X.tkh);
        kh[a - 1].mkh = X.mkh;
        getline(in, X.gt);
        getline(in, X.ns);
        getline(in, X.dc);
        kh[a - 1].tkh = X.tkh;
        kh[a - 1].dc = X.dc;
        return in;
    }
    friend ostream& operator<<(ostream& out, KhachHang X) {
        cout << X.tkh << ' ' << X.dc << ' ';
        return out;
    }
};
class MatHang {

public:
    string mmh, tmh, dvt;
    int gm, gb;
    MatHang() {
        mmh = "MH";
        tmh = dvt = "";
        gb = gm = 0;
    }
    friend istream& operator>>(istream& in, MatHang&X) {
        b++;
        X.mmh += (string(3 - to_string(b).length(), '0') + to_string(b));
        cin.ignore();
        getline(in, X.tmh);
        getline(in, X.dvt);
        cin >> X.gm >> X.gb;
        mh[b - 1].mmh = X.mmh;
        mh[b - 1].tmh = X.tmh;
        mh[b - 1].gb = X.gb;
        mh[b - 1].dvt = X.dvt;
        mh[b - 1].gm = X.gm;
        return in;
    }
    friend ostream& operator<<(ostream& out, MatHang X) {
        cout << X.tmh << ' ' << X.gm << ' ' << X.gb << ' ';
        return out;
    }
};
class HoaDon {
private:
    
public:
    string mkh, mmh;
    int sl;
    string mhd;
    HoaDon() {
        mhd = "HD";
        mkh = mmh = "";
        sl = 0;
    }
    friend istream& operator>> (istream& in, HoaDon& X) {
        c++;
        X.mhd += (string(3 - to_string(c).length(), '0') + to_string(c));
        cin >> X.mkh >> X.mmh >> X.sl;
        return in;
    }
    friend ostream& operator<<(ostream& out, HoaDon X) {
        cout << X.mhd << " ";
        for (int i = 0; i < a; i++) {
            if (X.mkh == kh[i].mkh)
                cout << kh[i].tkh<<" "<<kh[i].dc<<" ";
        }
        int a = 0;
        for (int i = 0; i < b; i++) {
            if (X.mmh == mh[i].mmh) {
                a = i;
                cout << mh[i].tmh << ' ' << mh[i].dvt << ' '<< mh[i].gm << ' ' << mh[i].gb << ' ';
            }
        }
        cout << X.sl << ' ' << X.sl * mh[a].gb << endl;
        return out;
    }
};


int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

/*

*/