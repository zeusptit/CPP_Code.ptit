#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

int solve(char a[][100],int n)
{
    int max = 0;
    int hor[n][n], ver[n][n];
    hor[0][0] = ver[0][0] = (a[0][0] == 'X');
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 'O')
                ver[i][j] = hor[i][j] = 0;
            else
            {
                hor[i][j] = (j == 0) ? 1 : hor[i][j - 1] + 1;
                ver[i][j] = (i == 0) ? 1 : ver[i - 1][j] + 1;
            }
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            int small = min(hor[i][j], ver[i][j]);
            while (small > max)
            {
                if (ver[i][j - small + 1] >= small && hor[i - small + 1][j] >= small)
                {
                    max = small;
                }
                small--;
            }
        }
    }
    return max;
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        char a[100][100];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        cout << solve(a,n) << endl;
    }
    return 0;
}
/*

*/
