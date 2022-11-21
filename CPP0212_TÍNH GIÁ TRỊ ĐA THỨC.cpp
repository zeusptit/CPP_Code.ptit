#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
ll mod = 1000000007;
ll powmod(ll a,ll b,ll c)
{
    if(b==0)return 1;
    ll tmp=powmod(a,b/2,c);
    if(b%2==1)
        return ((tmp%c)*(tmp%c))%c*(a%c)%c;
    else return (tmp%c)*(tmp%c)%c;
}
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,x;cin >> n >> x;
        map<int,int>mp;
        for(int i=n-1;i>=0;i--)
        {
            int k;cin >> k;
            mp[i]=k;
        }
        ll res=0;
        for(auto it:mp)
        {
            res+=1ll*powmod(x,it.first,mod)*it.second;
            res%=mod;
        }
        cout<<res<<endl;
    }
}
