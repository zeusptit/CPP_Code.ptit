#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

string solve(string s, string t)
{
    int ans = INT_MAX;
    int start = 0,count = 0;
    int m[256] = {0};
    for(int i = 0;i < t.length(); i++)
    {
        if(m[t[i]] == 0)
            count++;
        m[t[i]]++;
    }
    int i = 0, j = 0;
    while(j < s.length())
    {
        m[s[j]]--;
        if(m[s[j]] == 0)
            count--;
        if(count == 0)
            while(count == 0)
            {
                if(ans > j - i + 1)
                {
                    ans = j - i + 1;
                    start = i;
                }
                m[s[i]]++;
                if(m[s[i]] > 0)
                    count++;
                i++;
            }
        j++;
    }
    if(ans != INT_MAX)
        return s.substr(start,ans);
    else
        return "-1";
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string s,t;
        cin >> s >> t;
        string res = solve(s,t);
        cout << res << endl;
    }
}
/*

*/
