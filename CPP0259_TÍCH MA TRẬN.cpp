#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

void in(int a[][101],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
}
void out(int a[][101],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    quick();
    int n,m,p;
    cin >> n >> m >> p;
    int a[101][101],b[101][101],c[101][101];
    in(a,n,m);
    in(b,m,p);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<m;k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    out(c,n,p);
}
/*

*/
