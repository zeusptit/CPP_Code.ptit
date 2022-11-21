#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main()
{ 
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int k,n;
        cin >> k >> n;
        int a[n * k];
        for(int i=0;i<n*k;i++)cin >> a[i];
        sort(a, a + n * k);
        for(int x:a)cout << x << " ";
        cout << endl;
    }
}
/*

*/
