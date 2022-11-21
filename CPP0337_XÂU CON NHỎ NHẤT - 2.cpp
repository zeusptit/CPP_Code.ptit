#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int solve(string s)
{
    unordered_set<char> se;
    for (int i = 0; i < s.length(); i++)
        se.insert(s[i]);
    int k = se.size();
    unordered_map<char, int> mp;
    int res = INT_MAX;
    int j = 0; 
    for (int i = 0; i < s.length(); i++) 
    {
        mp[s[i]]++;
        while (mp.size() == k && mp[s[j]] > 1) 
        {
            mp[s[j]]--;
            j++;
        }
        if (mp.size() == k)
            res = min(i - j + 1, res);
    }
    return res;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s ;
        int res = solve(s);
        cout << res << endl;
    }
}
/*

*/
