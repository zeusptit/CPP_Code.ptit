#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;
long long lcm(long long a,long long b)
{
    long long c=a,d=b;
    while(b)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return c*d/a;
}
int main() {
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        long long n;
        cin >> n;
        long long res=1;
        for(long long i=1;i<=n;i++)
        {
            res=lcm(res,i);
        }   
        cout<<res<<endl;    
    }
}
/*

*/
