#include<bits/stdc++.h>
using namespace std; 

struct SinhVien{
    string name,id,bth,msv;
    float x;
};

void nhap(SinhVien a[50],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i].msv = "B20DCCN";
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].id >> a[i].bth;
        cin >> a[i].x;
        if(i < 9){
            string temp = "00";
            temp += to_string(i + 1);
            a[i].msv += temp;
         }
        else{
            string temp = "0";
            temp += to_string(i + 1);
            a[i].msv += temp;
        }
        string res = "";
        stringstream ss(a[i].name);
        string tmp;
        while(ss >> tmp)
        {
            res += toupper(tmp[0]);
            for(int i=1;i<tmp.length();i++)
                res += tolower(tmp[i]);
            res += " ";
        }
        res.erase(res.length() - 1);
        a[i].name = res;
    }
}
void cvt(string &s)
{
  if(s[1] == '/')s = '0' + s;
  for(int i=0;i<s.size();i++)
  {
      if(s[i] == '/' && s[i - 2] == '/')
      {
          s.insert(s.begin()+i-1,'0');
      }
  }
}
int cmp(SinhVien a,SinhVien b)
{
    return a.x > b.x;
}
void sapxep(SinhVien s[50],int n)
{
    sort(s,s + n,cmp);
}
void in(SinhVien s[50],int n)
{
    for(int i=0;i<n;i++)
    {
        cvt(s[i].bth);
        cout << s[i].msv << " " << s[i].name << " " << s[i].id << " " << s[i].bth << " ";
        cout << fixed << setprecision(2) << s[i].x;
        cout << endl;
     }
}
 
 int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
/*
2
ngUYen Van NaM
D20DCCN01-B
2/12/1994
2.17
Nguyen QuanG hAi
D20DCCN02-B
1/9/1994
3.0
*/
