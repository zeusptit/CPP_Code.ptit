#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int n,k,a[1005],ok;
void ktao()
{
    for(int i=1;i<=k;i++)
        a[i]=i;
}
void next()
{
    int i = k;
    while(i >= 1 && a[i] == n - k + i)i--;
    if(i == 0)ok=0;
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        cin >> n >> k;
        ok=1;
        ktao();
        while(ok)
        {
            for(int i=1;i<=k;i++)
                cout << a[i];
            cout << " ";
            next();
        }
        cout << endl;
    }
}
/*

*/
