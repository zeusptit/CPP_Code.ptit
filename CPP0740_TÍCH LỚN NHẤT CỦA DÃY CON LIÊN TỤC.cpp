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
        ll res = 0,sum;
        for(int i=0;i<n;i++)
        {
            sum = 1;
            for(int j=i;j<n;j++)
            {
                sum *= a[j];
                res = max(res,sum);
            }
        }
        cout << res << endl;
    }
}
/*

*/
