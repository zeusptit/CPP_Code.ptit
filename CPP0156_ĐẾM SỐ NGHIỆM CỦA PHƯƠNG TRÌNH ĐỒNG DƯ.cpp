#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

ll solve(ll b,ll p)
{
    ll ans=0;
    for(ll i=1;i<p;i++)
    {
        if( (i*i) % p == 1)
        {
            ll last = i + p*(b/p);
            if(last>b) last -= p;
            ans += ( (last-i)/p + 1);
        }
    }
    return ans;
}
int main() 
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        ll b,p;
        cin >> b >> p;
        cout<<solve(b,p)<<endl;
    }
    cout<<endl;
}
/*

*/
