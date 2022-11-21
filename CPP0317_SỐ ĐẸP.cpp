#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int check(string s)
{
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i] != s[l-i-1] || s[i] % 2 !=0)
            return 0;
    }
    return 1;
}
main()
{
    quick();
    int n;
    cin>> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(check(s))cout << "YES" << endl;else cout << "NO" << endl;
    }
}
/*

*/
