#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

class NhanVien{
    private:
        string no,name,sex,date,adr,tax,day;
    public:
        NhanVien(){
            no = "00001";
        }
        void nhap()
        {
            getline(cin,name);
            cin >> sex >> date ;
            cin.ignore();
            getline(cin,adr); 
            cin >> tax >> day;
        }
        void xuat()
        {
            cout << no << " " << name << " " << sex << " " << date << " " << adr << " " << tax << " " << day;
        }
};


int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
