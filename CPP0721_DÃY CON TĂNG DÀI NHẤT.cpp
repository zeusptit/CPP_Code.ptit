#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int test;cin >> test;
    while(test--)
    {
        int n;cin >> n;
        int a[1001];
        for(int i=0;i<n;i++)cin >> a[i];
        int dp[1001],res = 1;
        for(int i=0;i<n;i++)
        {
            dp[i] = 0;
            for(int j=i-1;j>=0;j--)
            {
                if(a[j] < a[i])
                    dp[i] = max(dp[i],dp[j]);
            }
            dp[i] += 1;
            res = max(res,dp[i]);
        }   
        cout << res << endl;
    }
}
