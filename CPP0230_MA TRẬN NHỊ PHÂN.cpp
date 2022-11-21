#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


void in(int a[][3],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
}

int main() {
    quick();
    int n;
    cin >> n;
    int a[1001][3];
    in(a,n,3);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int o=0,z=0;
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==1)o++;else z++;
        }
        if(o>z)cnt++;
    }
    cout << cnt << endl;
}
/*

*/
