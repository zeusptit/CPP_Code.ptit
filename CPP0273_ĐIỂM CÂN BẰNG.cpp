#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
    quick();
    int test;cin >> test;
    while(test--)
    {
        int n;cin >> n;
        ll a[n],b[n],s=0,kt=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            s+=a[i];
        }
        b[0]=a[0];
        for(int i=1;i<n;i++)b[i]=b[i-1]+a[i];
        for(int i=0;i<n;i++)
        {
            if(b[i]-a[i]==s-b[i])
            {
                kt=1;
                cout<<i+1<<endl;
                break;
            }
        }
        if(kt==0)cout<<"-1"<<endl;
    }
}
