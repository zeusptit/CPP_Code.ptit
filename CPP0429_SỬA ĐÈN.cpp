#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main(){
    quick();
    ll n,k,b;
    cin >> n >> k >> b;
    int wk[n];
    for(int i=0;i<n;i++)wk[i] = 1;
    for(int i=0;i<b;i++)
    {
        int x;cin >> x;
        wk[x - 1] = 0;
    }
    ll sum = 0,res;
    for(int i=0;i<k;i++)sum += wk[i];
    res = sum;
    for(int i=1;i<=n-k;i++)
    {
        sum = sum - wk[i - 1] + wk[i + k - 1];
        if(sum > res)
            res = sum;
    }
    cout << k - res << endl;
}
/*

*/
