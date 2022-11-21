#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i=0;i<n;i++)
        {
            int x;cin >> x;
            a.push_back(x);
        }
        int k,x,l,r;
        cin >> k >> x;
        int m = lower_bound(a.begin(),a.end(),x) - a.begin();
        if(a[m] == x)
        {
            r = m + 1;
            l = m - 1;
        }
        else
        {
            r = m;
            l = m - 1;
        }
        for(int i=k/2-1;i>=0;i--)cout << a[l - i] << " ";
        for(int i=0;i<k/2;i++)cout << a[r + i] << " ";
        cout << endl;
    }
}
/*

*/
