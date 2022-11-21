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
        int n,x;
        cin >> n >> x;
        int a[n], kt = 0,res;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(kt == 0)
            {
                if(a[i] == x)
                {
                    res = i + 1;
                    kt = 1;
                }
            }
        }
        if(kt == 1)cout << res << endl;else cout << "-1" << endl;
    }
}
/*

*/
