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
        int n,k;
        cin >> n >> k;
        ll a[n];
        for(int i=0;i<n;i++)cin >> a[i];
        ll sum = 0,res;
        for(int i=0;i<k;i++)sum += a[i];
        res = sum;
        int index = 0;
        for(int i=1;i<=n-k;i++)
        {
            sum = sum - a[i - 1] + a[i + k - 1];
            if(sum > res)
            {
                res = sum;
                index = i;
            }
        }
        for(int i=0;i<k;i++)
            cout << a[i + index] << " ";
        cout << endl;
     }
}
/*

*/
