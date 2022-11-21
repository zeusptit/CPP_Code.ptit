#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main()
{ 
    quick();
    vector<string>v;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)if(s[i]>= 65&s[i]<=97)s[i]+=32;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        v.push_back(tmp);
    }
    int n=v.size();
    string res="";
    res += v[n-1];
    for(int i=0;i<v.size()-1;i++)
        res += v[i].substr(0,1);
    cout << res << "@ptit.edu.vn";
}
/*

*/
