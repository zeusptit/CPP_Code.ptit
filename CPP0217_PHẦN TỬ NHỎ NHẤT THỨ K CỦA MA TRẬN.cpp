#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v;
        for(int i=0;i<n*n;i++)
        {
            int x;cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout << v[k-1] << endl;
    }
}
