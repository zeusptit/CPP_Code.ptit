#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

ll m;
ll process(ll x,ll y)
{
    if(y==0)return 1;
    if(y==1)return x;
    if(y%2==0)return process(x*x%m,y/2)%m;
    else return x*process(x*x%m,y/2)%m;
}
ll solve(string &s)
{
    ll res=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        res = res * 10 + s[i] - '0';
        res %= m;	
    }	
    return res;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        ll a,b;
        string s;
        cin  >> s >> b >> m;
        a = solve(s);
        cout << process(a,b) << endl;
    }
}
