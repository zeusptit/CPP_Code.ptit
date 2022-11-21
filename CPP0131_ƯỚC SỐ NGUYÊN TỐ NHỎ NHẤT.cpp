#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int a[10000001]={0};
void sang()
{
    for(int i=2;i<=10000001;i++)
        for(int j=i*2;j<=10000001;j+=i)
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
        int n;
        cin >> n;
        cout<<"1 ";
        for(int i=2;i<=n;i++)
        {
          if(a[i]==0)cout<<i<<" ";
          else{
            if(i%2==0)cout<<"2 ";
            else{
              for(int j=2;j<=sqrt(i);j++)
                if(i%j==0)
                {
                  cout<<j<<" ";
                  break;
                }
              }
            }   
        }
        cout<<endl;
    }
}
