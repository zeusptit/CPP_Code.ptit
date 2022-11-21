#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
ll a[94];
void fibo(ll a[94])
{
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=93;i++)
        a[i]=a[i-1]+a[i-2];
}
int main()
{
    quick();
    int test;
    cin >> test;
    ll b[94];
    fibo(b);
    while(test--)
    {
        int n;cin >> n;
        int a[n],c[1001]={0};
        for(int i=0;i<n;i++)cin >> a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=93;j++)
            {
                if(a[i]==b[j])
                    c[a[i]]=1;
            }
        }
        for(int i=0;i<n;i++)
            if(c[a[i]])
                cout<<a[i]<<" ";
        cout<<endl;
    }
}
