#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n ;
        int a[1001];
        for(int i=0;i<n;i++)cin >> a[i];
        int min = INT_MAX,res;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(a[i] + a[j]) < min)
                {
                    min = abs(a[i] + a[j]);
                    res = a[i] + a[j];
                }
            }
        }
        cout << res << endl;
    }
}
/*

*/
