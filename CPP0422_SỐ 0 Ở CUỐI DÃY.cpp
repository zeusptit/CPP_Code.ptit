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
        int n,cnt = 0;
        cin >> n;
        vector <ll> v;
        for(int i=0;i<n;i++)
        {
            ll x;cin >> x;
            if(x == 0)cnt++;else v.push_back(x);
        }
        for(int i=0;i<v.size();i++)
            cout << v[i] << " ";
        for(int i=1;i<=cnt;i++)cout << "0 ";
        cout << endl;
    }
}
/*

*/
