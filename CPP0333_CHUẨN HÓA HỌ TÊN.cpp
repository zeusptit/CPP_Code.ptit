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
    int pos;
    for(int i=0;i<s.size();i++)if(s[i]>= 65&&s[i]<=90)s[i]+=32;
    s[0]-=32;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' '&&s[i+1]!=' ')
        {
            s[i+1]-=32;
            pos=i+1;
        }
    }
    for(int i=pos+1;i<s.size();i++)s[i]-=32;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        v.push_back(tmp);
    }
    int n=v.size();
    for(int i=0;i<n-1;i++)if(i != n-2)cout<<v[i]<<" ";else cout << v[i];
    cout << ", " << v[n-1];
}
/*

*/
