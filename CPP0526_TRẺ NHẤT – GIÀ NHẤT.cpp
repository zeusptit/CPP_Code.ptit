#include<bits/stdc++.h>
using namespace std; 

struct People{
    string name,bth;
};
 
typedef struct People PP;
void nhap(PP &s)
{
    cin >> s.name>>s.bth;
}
int cmp(PP a,PP b)
{
    string temp1 = "",temp2 = "";
    temp1 += a.bth.substr(6,4);temp2 += b.bth.substr(6,4);  
    temp1 += a.bth.substr(3,2);temp2 += b.bth.substr(3,2);
    temp1 += a.bth.substr(0,2);temp2 += b.bth.substr(0,2);
    return temp1>temp2;
}
void sap_xep(PP s[],int n)
{   
      sort(s,s + n,cmp);
}
void in_ds(PP s[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i == 0 || i == n - 1)
            cout << s[i].name << endl;
    }
}
 int main(){
    int n;
    cin >> n;
    PP list[100];
    for(int i = 0; i < n; i++) {
        nhap(list[i]);
      }
      sap_xep(list, n);
    in_ds(list,n);
    return 0;
}
/*
5
Nam 01/10/1991
An 30/12/1990
Binh 15/08/1993
Tam 18/09/1990
Truong 20/09/1990
*/
