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
      printf("%05d ",i + 1);
      cout << s[i].name << " " << s[i].sex << " " << s[i].bth << " " << s[i].adr << " " << s[i].code << " " << s[i].day << endl;
    }
}	
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
