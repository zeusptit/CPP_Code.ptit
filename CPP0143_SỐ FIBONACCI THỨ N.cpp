#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

long long a[94];
void fibo()
{
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=93;i++)
        a[i]=a[i-1]+a[i-2];
}

int main() {
    quick();
    int test;
    cin >> test;
    fibo();
    while(test--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}
/*

*/
