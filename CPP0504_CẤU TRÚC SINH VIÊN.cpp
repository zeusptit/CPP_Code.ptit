#include<bits/stdc++.h>
using namespace std; 
 
struct SinhVien{
    string name,id,bth;
    float x;
};
 
void nhap(SinhVien &s)
{
    getline(cin,s.name);
    cin >> s.id >> s.bth;
    cin >> s.x;
}
void cvt(string &s)
{
if(s[1] == '/')s = '0' + s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '/' && s[i-2] == '/')
        {
            s.insert(s.begin()+i-1,'0');
        }
    }
}
void in(SinhVien s)
{
    cvt(s.bth);
    cout << "B20DCCN001" << " " << s.name << " " << s.id << " " << s.bth << " ";
    cout << fixed << setprecision(2) << s.x;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
