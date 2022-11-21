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
        set <int> se;
        int n;cin >> n;
        vector <int> v;
        int res = -1,kt = 0;
        for(int i=0;i<n;i++)
        {
            int x;cin >> x;
            if(kt == 0)
            {
                if(se.find(x) != se.end())
                {
                    res = x;
                    kt = 1;
                }
            }
            se.insert(x);
        }
        cout << res << endl;
    }
}
/*

*/
