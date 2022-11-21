#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

int log2(int x)
{
    return (int)(log(x) / log(2));
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n ; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int temp = INT_MIN;
        for(int i = 0; i < n ; i++ )temp = max(temp,log2(a[i]));
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            while(a[i])
            {
                count += a[i] % 2;
                a[i] /= 2;
            }
        }
        cout << temp + count << endl;
    }
}
/*

*/
