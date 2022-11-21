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
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        int idx_1,idx_2;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i] != b[i])
            {
              idx_1 = i;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i] != b[i])
            {
                idx_2 = i;
            }
        }
        cout << idx_2+1 << " " << idx_1+1 << endl;
      }
}
/*

*/
