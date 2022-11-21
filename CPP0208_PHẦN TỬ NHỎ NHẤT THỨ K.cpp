#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int a[1000001];
int main() {
    quick();
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout << v[k-1] << endl;
    }
}
/*

*/
