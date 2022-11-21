#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int main(){
    quick();
    int test;
    cin>>test;
    while(test--)
    {
      string s;
      cin >> s;
      int l=s.size(),kt=1;
      for(int i=0;i<l;i++)
      {
        if(s[i] != s[l-i-1])
        {
          kt=0;
          break;
        }
      }
      if(kt==0)cout<<"NO"<<endl;else cout<<"YES"<<endl;
    }
}
/*

*/
