#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int check(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
    return 1;
}
int s(int n)
{
    int res=0;
    while(n)
    {
        res+=n%10;
        n/=10;
    }
    return res;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int m=n;
        int k=0;
        for(int i=2;i<n;i++)
        {
            while(check(i) && m % i == 0)
            {
                k += s(i);
                m /= i;
            }
        }
        if(s(n) == k)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;   
    }
}
/*

*/
