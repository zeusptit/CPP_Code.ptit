#include<bits/stdc++.h>
using namespace std; 

struct SinhVien{
    string MSV,name,clas;
    float a,b,c;
};  
 
typedef struct SinhVien SV;
void nhap(SV &s)
{
    cin.ignore();
    getline(cin, s.MSV);
    getline(cin, s.name);
    getline(cin, s.clas);
    cin >> s.a >> s.b >> s.c;
}
int cmp(SV a,SV b)
{
    return a.name < b.name;
}
void sap_xep(SV s[],int n)
{   
    sort(s,s + n,cmp);
}
void in_ds(SV s[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << i + 1 << " ";
        cout << s[i].MSV << " " << s[i].name << " " << s[i].clas << setprecision(1) << fixed << " " << s[i].a << " " << s[i].b << " " << s[i].c << endl;
    }
}
 int main(){
    int n;
    cin >> n;
    SV list[100];
    for(int i = 0; i < n; i++) {
        nhap(list[i]);
      }
      sap_xep(list, n);
    in_ds(list,n);
    return 0;
}
/*
3
B20DCCN999
Nguyen Van Nam
D20CQCN04-B
10.0
9.0
8.0
B20DCAT001
Le Van An
D20CQAT02-B
6.0
6.0
4.0
B20DCCN111
Nguyen Van Binh
D20CQCN01-B
9.0
5.0
6.0
*/
