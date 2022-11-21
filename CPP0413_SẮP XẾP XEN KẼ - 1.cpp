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
        int n;
        cin >> n;
        int a[1001];
        for(int i=0;i<n;i++)cin>>a[i];
        int l=0,r=n-1;
        sort(a,a+n,greater<int>());
        while(l < n/2 && r > n/2)
        {
            cout << a[l] << " " << a[r] << " ";
            l++;
            r--;
        }
        if(n % 2 == 0)cout << a[l] <<" " << a[r] <<" ";else cout << a[l];
        cout << endl;
    }
}
/*

*/
