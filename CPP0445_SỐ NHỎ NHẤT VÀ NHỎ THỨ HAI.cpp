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
        set <int> se;
        for(int i=0;i<n;i++)
        {
            int x;cin >> x;
            se.insert(x);
        }
        int cnt = 0;
        if(se.size() != 1)
        {
            for(int x  : se)
            {
                if(cnt == 2)break;
                cout << x << "  ";
                cnt++;
            }
            cout << endl;
        }
        else cout << "-1" << endl;
    }
}
/*

*/
