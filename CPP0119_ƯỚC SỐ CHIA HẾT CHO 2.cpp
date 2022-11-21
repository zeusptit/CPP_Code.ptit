#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
int check(int n)
{
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i%2==0)cnt++;
            if((n/i)%2==0)cnt++;
            if(i*i==n && n%2==0)cnt--;
        }
    }
    return cnt;
}
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout<<check(n)<<endl;
    }
}
