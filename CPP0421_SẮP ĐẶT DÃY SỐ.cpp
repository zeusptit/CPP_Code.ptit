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
        int n;
        cin >> n;
        map <ll,int> mp;
        for(int i=0;i<n;i++)
        {
            ll x;cin >> x;
            if(x >= 0)mp[x]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[i])cout << i << " ";else cout << "-1 ";
        }
        cout<<endl;
    }
}
/*

*/
