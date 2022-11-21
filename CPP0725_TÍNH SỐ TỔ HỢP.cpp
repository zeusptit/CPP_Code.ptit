#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int mod=1000000007;
ll C[1005][1005];

void init()
{
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j == 0 || i == j)
                C[i][j] = 1;
            else 
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
        }
    }
}
int main(){
    quick();
    int test;
    cin >> test;
    init();
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }
}
/*

*/
