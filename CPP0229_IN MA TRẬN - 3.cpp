#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

void solve(int a[105][105],int n,int m)
{
    int i=0,j=0;
    bool x=true;
    for(int k=0;k<n*m;)
    {   
        if(x)
        {
            for(;i >= 0 && j < m;j++,i--)
            {
                cout << a[i][j] <<" ";
                k++;
            }
            if(i < 0 && j <= m-1)
                i=0;
            if(j == m)
                i=i+2,j--;
        }else{
            for(;j >= 0 && i < n;i++,j--)
            {
                cout << a[i][j] << " ";
                k++;
            }
            if(j < 0 && i <= n-1)
                j=0;
            if(i == n)
                j=j+2,i--;
        }
        x=!x;
    }
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,m;
        cin >> n >> m;
        int a[105][105];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin >> a[i][j];
        solve(a,n,m);
        cout << endl; 
    }
}
/*
gcd(a,b)=gcd(b,a%b);

*/
