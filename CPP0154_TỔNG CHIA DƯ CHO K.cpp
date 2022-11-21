#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int main() {
    quick();
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        long k;
        cin>>n>>k;
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            sum += i%k;
        }
        if(sum == k)cout<<"1"<<endl;else cout<<"0"<<endl;
    }
}
/*

*/
