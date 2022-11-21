#include<bits/stdc++.h>
using namespace std; 

struct NhanVien{
    string name,sex,bth,adr,code,day;
    int id;
};
 
void nhap(NhanVien &s)
{
    cin.ignore();
    getline(cin,s.name);
    cin >> s.sex >>s.bth;
    cin.ignore();
    getline(cin,s.adr);
    cin >> s.code>> s.day;
}
 
void inds(NhanVien s[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%05d ",s[i].id);
        cout << s[i].name << " " << s[i].sex << " " << s[i].bth << " " << s[i].adr << " " << s[i].code << " " << s[i].day << endl;
    }
}
 
int cmp(NhanVien a,NhanVien b)
{
    string temp1 = "",temp2 = "";
    temp1 += a.bth.substr(6,4);temp2 += b.bth.substr(6,4);
    temp1 += a.bth.substr(0,2);temp2 += b.bth.substr(0,2);
    temp1 += a.bth.substr(3,2);temp2 += b.bth.substr(3,2);
    return temp1 < temp2;
}
void sapxep(NhanVien s[],int n)
{
    for(int i=0;i<n;i++)
    {
        s[i].id = i + 1;
    }
 	  sort(s,s + n,cmp);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
/*
3
Nguyen Van A
Nam
10/22/1982
Mo Lao-Ha Dong-Ha Noi
8333012345
31/12/2013
Ly Thi B
Nu
10/15/1988
Mo Lao-Ha Dong-Ha Noi
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
Mo Lao-Ha Dong-Ha Noi
8333012347
22/08/2011
*/
