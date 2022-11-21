#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        map<char,int>mp;
        int dem=0;
        char max;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]>dem)
            {
                dem=mp[s[i]];
                max=s[i];
            }
        }
        if(mp[max]-1>s.length()-mp[max])
            cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
}
/*

*/
