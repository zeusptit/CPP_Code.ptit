#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
int a[1000000]={0};
void sang()
{
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=1000000;i++)
        for(int j=2*i;j<=1000000;j+=i)
            a[j]=1;
}
int main()
{
    quick();
    int test;
    cin >> test;
    sang();
    while(test--)
    {
        int l,r;cin >> l >> r;
        int cnt=0;
        for(int i=l;i<=r;i++)
        {
          if(a[i]==0)cnt++;
        }
        cout<<cnt<<endl;
    }
}
