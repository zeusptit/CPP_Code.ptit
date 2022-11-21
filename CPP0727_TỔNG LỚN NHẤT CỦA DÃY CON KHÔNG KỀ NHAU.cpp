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
        ll a[n + 5],dp[n + 5] ={ 0 };
        for(int i=1;i<=n;i++)cin >> a[i];
        dp[1] = a[1];
        dp[2] = max(a[1],a[2]);
        for(int i=3;i<=n;i++)
        {
            dp[i] = max(dp[i - 2] + a[i],dp[i - 1]);
        }
        cout << dp[n] << endl;
    }
}
/*
2
6
5  5  10  100  10  5
3
1  20  3
*/
