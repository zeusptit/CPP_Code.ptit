#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

ll process(ll a,ll b)
{
    if(b==0)return 1;
    if(b==1)return a;
    if(b%2==0)return process(a*a%mod,b/2)%mod;
    else return a*process(a*a%mod,b/2)%mod;
}
int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}
 int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;cin >> n;
        int a[n];
        for(int &x:a)cin >> x;
        ll hX=1,gX=0,res;
        for(int i=0;i<n;i++)
        {
            hX *= a[i];
            gX = gcd(gX,a[i]);
            hX %= mod;
        }
        res = process(hX,gX);
        cout << res << endl;
    }
}
/*

*/
