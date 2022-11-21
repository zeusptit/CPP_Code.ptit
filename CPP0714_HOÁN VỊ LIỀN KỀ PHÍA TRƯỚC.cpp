#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main() {
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)cin >> a[i];
        prev_permutation(a,a + n);
        for(int i=0;i<n;i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
