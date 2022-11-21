#include<bits/stdc++.h>
using namespace std; 

struct Time{
    int h,m,s;
};
 
typedef struct Time Te;
void nhap(Te &s)
{
    cin >> s.h>>s.m>>s.s;
}
int cmp(Te a,Te b)
{
    return (a.h * 60 * 60 + a.m * 60 + a.s) < (b.h * 60 * 60 + b.m * 60 + b.s);
}
void sap_xep(Te s[],int n)
{   
      sort(s,s + n,cmp);
}
void in_ds(Te s[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << s[i].h << " " << s[i].m << " " << s[i].s << endl;
    }
}
int main(){
    int n;
    cin >> n;
    Te list[5000];
    for(int i = 0; i < n; i++) {
      nhap(list[i]);
    }
    sap_xep(list, n);
    in_ds(list,n);
    return 0;
}
/*
3
11 20 20
14 20 14
11 15 12
*/
