#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
     quick();
     int test;
     cin >> test;
     while(test--)
     {
        int n;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)cin >> a[i];
        ll res = 0,sum = 0;
        int kt = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] >= 0)kt = 1;
            sum = max(a[i],sum + a[i]);
            res = max(sum,res);
        }
        if(kt)cout << res << endl;
        else{
            sort(a,a + n);
            cout << a[n - 1] << endl;
        }
     }
}
/*

*/
