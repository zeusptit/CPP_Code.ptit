#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

char vw[6]={'a', 'e', 'i', 'o', 'u', 'y'};
int main()
{ 
    quick();
    string s;
    cin >> s;
    vector<char>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=90)s[i]+=32;
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')continue;
        else v.push_back(s[i]);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<"."<<v[i];
    }
}
/*

*/
