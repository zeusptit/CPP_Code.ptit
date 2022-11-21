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
    int test;
    cin >> test;
    while(test--)
    {
        int n, m;
        cin >> n >> m;
        int a[101][101];
        in(a,n,m);
        int row[101]={0},col[101]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(row[i]==1)
            for(int j=0;j<m;j++)
            {
                a[i][j]=1;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(col[j]==1)
            for(int i=0;i<n;i++)
            {
                a[i][j]=1;
            }
        }
        out(a,n,m);
    }
}
/*

*/
