#include<bits/stdc++.h>
using namespace std; 
 
struct NhanVien{
    string name,sex,bth,adr,code,day;
};

void nhap(NhanVien &s)
{
    getline(cin,s.name);
    cin >> s.sex >> s.bth;
    cin.ignore();
    getline(cin,s.adr);
    cin >> s.code>> s.day;
}

void in(NhanVien s)
{
    cout << "00001" << " " << s.name << " " << s.sex << " " << s.bth << " " << s.adr << " " << s.code << " " << s.day;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
