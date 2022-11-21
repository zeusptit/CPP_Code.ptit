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
    while(test--)
    {
        int n ;
        cin >> n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin >> x;
            mp[x]++;
        }
        int cnt=0;
        for(auto it:mp)
            if(it.second>1)cnt += it.second;
        cout << cnt << endl;
    }
}
/*

*/
