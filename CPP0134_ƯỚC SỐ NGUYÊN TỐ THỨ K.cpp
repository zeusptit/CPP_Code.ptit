#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,k;
        vector<int>v;
        cin>>n>>k;
        for(int i=2;i<=sqrt(n);i++)
        {
            while(n % i == 0)
            {
                n /= i;
                v.push_back(i);
            }
        }
        if(n>1)v.push_back(n);
        if(v.size() >= k)cout<<v[k-1]<<endl;else cout<<"-1"<<endl;
    }
}
/*

*/
