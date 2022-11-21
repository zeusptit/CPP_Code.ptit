#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main()
{ 
    quick();
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        ll res=0;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)res += s[i]-'0';
            else res -= s[i]-'0';
        }
        if(res % 11 == 0)cout << "1\n";else cout << "0\n";
    }
}
/*

*/
