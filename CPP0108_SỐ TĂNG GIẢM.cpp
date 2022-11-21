#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int tang(long n)
{
    while(n&&n/10)
    {
        int temp=n%10;
        n/=10;
        if(temp<=n%10)return 0;
    }
    return 1;
}
int giam(long n)
{
    while(n&&n/10)
    {
        int temp=n%10;
        n/=10;
        if(temp>=n%10)return 0;
    }
    return 1;
}
bool pN(long n)
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
        int n,cnt=0;
        cin >> n;
        long a=pow(10,n-1),b=pow(10,n);
        for(long i=a;i<=b;i++)
          if(tang(i)||giam(i))
            if(pN(i))
              cnt++;
        cout<<cnt<<endl;
    }
}
