#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n, m ;
        cin >> n >> m;
        int a[505][505];
        for(int i = 0; i < n; i++)  
            for(int j = 0; j < m; j++)
                cin >> a[i][j];
        int kel[3][3];
        ll sum = 0;
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                cin >> kel[i][j];
        for(int i = 0; i <= n - 3; i++)
            for(int j = 0; j <= m - 3; j++)
                for(int k = 0; k < 3; k++)
                    for(int l = 0; l < 3; l++)
                        sum += kel[k][l] * a[i + k][j + l];
        cout << sum << endl;
    }
}
/*

*/
