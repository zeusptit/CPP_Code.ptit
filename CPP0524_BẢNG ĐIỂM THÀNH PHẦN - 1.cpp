#include<bits/stdc++.h>
using namespace std; 

struct SinhVien{
    string MSV,name,clas;
    float a,b,c;
};

typedef struct SinhVien SV;
void nhap(SV &s)
{
    cin >> s.MSV;
    cin.ignore();
    getline(cin,s.name);
    cin >> s.clas >> s.a >> s.b >> s.c;
}
int cmp(SV a,SV b)
{
    return a.MSV<b.MSV;
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
        cout << s[i].MSV << " " << s[i].name << " " << s[i].clas << " ";
        printf("%.1f %.1f %.1f\n",s[i].a,s[i].b,s[i].c);
    }
}
 
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
        nhap(ds[i]);
      }
      sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
/*
3
B20DCCN999
Nguyen Van An
D20CQCN04-B
10.0
9.0
8.0
B20DCAT001
Le Van Nam
D20CQAT02-B
6.0
6.0
4.0
B20DCCN111
Tran Hoa Binh
D20CQCN04-B
9.0
5.0
6.0
*/
