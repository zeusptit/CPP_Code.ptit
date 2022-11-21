#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        ll n;
        cin >> n;
        if(n == 0||n == 1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        long long fn=1,f1=1,f0=0;
        while(fn<n)
        {
            fn=f0+f1;
            f0=f1;
            f1=fn;
        }
        if(fn == n)cout<<"YES"<<endl;else cout<<"NO"<<endl;
    }
}
