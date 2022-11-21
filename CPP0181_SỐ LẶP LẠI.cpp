#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
ll gcd(ll a,ll b)
{
    while(b)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        ll a,x,y,res=0;
        cin >> a >> x >> y;
        res=gcd(x,y);
        for(long i=0;i<res;i++)
            cout<<a;
        cout<<endl;
    }
}
