#include<bits/stdc++.h>
using namespace std; 

struct Item{
    string name,type;
    float buy,sell,prf;
    int id;
};
 
typedef struct Item It;

int cmp(It a,It b)
{
    return a.prf > b.prf;
}
void nhap(It s[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        s[i].id = i+1;
        getline(cin,s[i].name);
        getline(cin,s[i].type);
        cin >> s[i].buy >> s[i].sell;
        s[i].prf = s[i].sell - s[i].buy;
    }
    sort(s,s + n,cmp);
}
void xuat(It s[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << s[i].id << " " << s[i].name << " " << s[i].type << " ";
        cout << fixed << setprecision(2) << s[i].prf << endl;
    }
}
int main() {
    It list[100];
    int n;
    cin >> n;
    nhap(list,n);
    xuat(list,n);
}
/*
3
May tinh SONY VAIO
Dien tu
16400
17699
Tu lanh Side by Side
Dien lanh
18300
25999
Banh Chocopie
Tieu dung
27.5
37
*/
