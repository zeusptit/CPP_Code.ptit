#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int main(){
    quick();
    int n;
    long long s=0,sum;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
      sum=1;
      for(int j=1;j<=i;j++)
        sum*=j;
      s+=sum;
    }
    cout<<s;
}
/*

*/
