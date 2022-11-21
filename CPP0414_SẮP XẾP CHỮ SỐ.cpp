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
    while(test--)
    {
        int n;cin>>n;
        set<char>se;
        while(n--)
        {
            string s;
            cin >> s;
            for(int i=0;i<s.size();i++)
            {
                se.insert(s[i]);
            }
        }
        for(char x:se)
        {
            cout << x << " ";
        }
        cout<<endl;
    }
}
/*

*/
