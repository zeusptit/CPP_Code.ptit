#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
ll lcm(ll a,ll b)
{
    ll c=a,d=b;
    while(b)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return c/a*d;
}
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        ll x,y,z;long n;
        cin >> x >> y >> z >> n;
        ll res=lcm(x,y);
        res=lcm(res,z);
        ll dau=pow(10,n-1)/res,cuoi=pow(10,n)/res;
        if(dau<1&&cuoi<1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(dau*res<pow(10,n-1))
        {
            dau++;
            cout<<dau*res<<endl;
        }else{
            cout<<dau*res<<endl;
        }
    }
}
