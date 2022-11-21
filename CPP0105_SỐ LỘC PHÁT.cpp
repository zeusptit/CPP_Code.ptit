#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int check(int n)
{
    int temp,kt=0;
    while(n)
    {
      temp=n%10;
      if(temp==0 || temp==6 ||temp==8)kt=1;
      else break;
      n/=10;
    }
    if(kt==1)return 1;
    return 0;
}
int main(){
    quick();
    int test;
    cin>>test;
    while(test--)
    {
      int n;
      cin>>n;
      if(check(n))cout<<"YES"<<endl;else cout<<"NO"<<endl;
    }
}
/*

*/
