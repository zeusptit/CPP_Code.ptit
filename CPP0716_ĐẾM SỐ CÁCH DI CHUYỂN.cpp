#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int recur(int M[][21], int m, int n, int k)
{
    if (m < 0 || n < 0) return 0;
    if (m == 0 && n == 0) return (k == M[m][n]);

    return recur(M, m - 1, n, k - M[m][n]) + recur(M, m, n - 1, k - M[m][n]);
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n,k; cin >> n >> k;
        int M[21][21];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> M[i][j];
        cout << recur(M, n-1, n-1, k) << endl;
    }
}
/*

*/
