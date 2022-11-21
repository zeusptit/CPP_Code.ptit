#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
      int n;cin >> n;
      int a[n];
      for(int &x : a)cin >> x;
      ll b[n];
      b[0] = a[0] * a[1];
      b[n-1] = a[n - 1] * a[n - 2];
      for(int i=1;i<n-1;i++)
      {
          b[i] = a[i - 1] * a[i + 1];
      }
      for(ll x : b)cout << x << " ";
      cout << endl;
    }
}
/*

*/
