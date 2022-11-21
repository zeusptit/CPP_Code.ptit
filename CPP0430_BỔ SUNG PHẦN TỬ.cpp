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
        int a[100001],d[100001] = {0};
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            d[a[i]]++;
        }
        int cnt = 0;
        sort(a,a + n);
        int l = a[0],r = a[n - 1];
        for(int i=l;i<=r;i++)
        {
            if(d[i] == 0)cnt++;
        }
        cout << cnt << endl;
    }
}
/*

*/
