#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    string name,clas,bth;
    float gpa;
};

SinhVien nhapThongTinSV(SinhVien &a)
{
    getline(cin,a.name);
    cin >> a.clas >> a.bth >> a.gpa;
    if (a.bth[1] == '/') a.bth = "0" + a.bth;
    if (a.bth[4] == '/') a.bth.insert(3, "0");
    return a;
}
SinhVien inThongTinSV(SinhVien a)
{
    cout << "N20DCCN001 " << a.name << " " << a.clas << " " << a.bth << " ";
    cout << fixed << setprecision(2) << a.gpa;
    return a;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
