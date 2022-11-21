#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main(){
    quick();
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long i,j,tmp;
        long a[n][n];
        long h[n],c[n];
        fill(h,h + n,0);
        fill(c,c + n,0);
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                cin >> a[i][j];
                h[i] = h[i] + a[i][j];
                c[j] = c[j] + a[i][j];
            }
        }
        long sum = 0;
        long m = LONG_MIN;
        for (i=0; i<n; i++)
        {
            sum = sum + c[i];
            if (m < c[i]) m = c[i];
            sum = sum + h[i];
            if (m < h[i]) m = h[i];
        }
        cout << ((m*n*2) - sum)/2 << endl;
    }
}
/*
2
2
1 2 3 4
3
1 2 3 4 2 3 3 2 1
*/
