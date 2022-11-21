#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

pair<int,int> path[]={{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1},{1, -1}, {1, 0}, {1, 1}};

int n,m,a[505][505];
void nhap()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
}

void Try(int i,int j)
{
    a[i][j]=0;
    for(int k=0;k<8;k++)
    {
        int inew=i+path[k].first;
        int jnew=j+path[k].second;
        if(inew>=0 && inew<n && jnew>=0 && jnew<m && a[inew][jnew]==1)
        {
            Try(inew,jnew);
        }
    }
}



int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        nhap();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                  cnt++;
                  Try(i,j);
                }
            }
        }
        cout<<cnt<<endl;
    }
}
