#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


int main() {
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;cin >> n;
        int a[n + 5];
        for(int i=1;i<=n;i++)cin >> a[i];
        ll dp[1005];
        ll res = 0,temp;
        for(int i=1;i<=n;i++)
        {
            dp[i] = a[i];
            for(int j=1;j<=i;j++)
            {
                if(a[i] > a[j])
                    dp[i] = max(dp[i],dp[j] + a[i]);
            }
            res = max(res,dp[i]);
        }
        cout << res << endl;
    }
}
   
