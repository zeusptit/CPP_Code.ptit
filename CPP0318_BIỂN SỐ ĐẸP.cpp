#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

bool check1(string s)
{
    s.erase(s.begin()+8);
    for(int i=5;i<s.length()-1;i++)
        if(s[i]>=s[i+1])return false;
    return true;
}
bool check2(string s)
{
    for(int i=5;i<s.length()-1;i++)
        if(s[i]!=s[i+1])return false;
    return true;
}
bool check3(string s)
{
    for(int i=5;i<7;i++)
        if(s[i]!=s[i+1])return false;
    for(int i=9;i<10;i++)
        if(s[i]!=s[i+1])return false;
    return true;
}
bool check4(string s)
{
    s.erase(s.begin()+8);
    int kt=0;
    for(int i=5;i<s.length();i++)
    {
        if(s[i]=='6'||s[i]=='8')
        kt++;
    }
    if(kt!=5)return false;
    return true;
}
int main(){
    quick();
    int test;
    cin >> test;
    cin.ignore();
    while(test--)
    {
        string s;
        getline(cin ,s);
        if(check1(s)||check2(s)||check3(s)||check4(s))cout<<"YES"<<endl;else  cout<<"NO"<<endl;
    }
}
/*
7
29T1–123.45
29T1–555.55
29T1–222.33
29T1–686.88
29T1–123.33
29T1–555.54
29T1–606.88
*/
