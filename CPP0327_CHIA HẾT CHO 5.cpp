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
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')res=(2*res+1)%5;
            else res=(2*res)%5;
        }
        if(res==0)cout << "Yes\n";else cout << "No\n";
    }
}
/*

*/
