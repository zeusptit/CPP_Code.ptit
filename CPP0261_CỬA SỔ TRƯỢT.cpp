#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main(){
    quick();
    int n,m;cin >>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)    
            cin >> a[i][j];
    cin >> m;
    int b[m][m];
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            cin >> b[i][j];
    for(int i=0;i<n;i+=m)
        for(int j=0;j<n;j+=m)
            for(int k=0;k<m;k++)
                for(int l=0;l<m;l++)
                    a[k+i][l+j] *= b[k][l];
    for(int i=0;i<n;i++)
    {
        for( int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
