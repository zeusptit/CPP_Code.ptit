#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main() {
    quick();
    int test;
    cin >> test;
    cin.ignore();
    while(test--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        int num=s.size()-mp.size();
        int rest=26-mp.size();
        if(k<=num && k>=rest)cout<<"1"<<endl;else cout<<"0"<<endl;
    }
}
/*

*/
