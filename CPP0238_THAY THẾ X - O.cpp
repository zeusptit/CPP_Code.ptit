#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;
#define N 405

void in(char a[][N], int n, int m)
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];
}
 
void out(char a[][N], int n, int m)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
pair<int,int> pr[]={ { -1, 0 }, { 1, 0 }, { 0, 1 }, { 0, -1}};

int used[N][N] = {};
char a[N][N];
int n, m;

void loop(int i, int j)
{
    a[i][j] = 'O';
    used[i][j] = 1;
    for (int k = 0; k < 4; ++k)
    {
        int inew = i + pr[k].first;
        int jnew = j + pr[k].second;
        if (!used[inew][jnew] && a[inew][jnew] == '1') 
            loop(inew, jnew);
    }
}
 
void change()
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if(a[i][j] == '1')
                a[i][j] = 'X';
}

int main()
{
    int test; cin >> test;
    while (test--)
    {
        cin >> n >> m;
        in(a, n, m);
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j)
                if (a[i][j] == 'O')
                    a[i][j] = '1';
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j)   
                used[i][j] = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (i == 1 || i == n)
                for(int j = 1; j <= m; ++j)
                    if(a[i][j] == '1')
                     loop(i, j);
            for (int j = 1; j <= m; j += m - 1)
                if (a[i][j] == '1')
                    loop(i, j);
        }
        change();
        out(a, n, m);
    }
}
/*

*/
