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
        int a[n];
        map <int,int> mp;
        for(int i=0;i<n-1;i++)
        {
            int x;cin >> x;
            mp[x]++;
        }
        for(int i=1;i<=10000000;i++)
        {
            if(mp[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
/*

*/
