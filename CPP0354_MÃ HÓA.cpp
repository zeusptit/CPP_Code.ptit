#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main()
{ 
    quick();
    int test;
    cin >> test;
    cin.ignore();
    while(test--)
    {
        string s;
        cin >> s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]])
            {
                cout << s[i] << mp[s[i]];
                mp[s[i]]=0;
            }
        }
        cout<<endl;
    }
}
/*

*/
