#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}
bool pN(int n)
{
    for(int i=2;i<=sqrt(n);i++)if(n%i==0)return false;
    return n>1;
}
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int x;
        cin >> x;
        int t=0;
        for(int i=1;i<=x;i++)
        {
            if(gcd(i,x)==1)
                t++;
        }
        if(pN(t))cout<<"1"<<endl;else cout<<"0"<<endl;
    }
}
