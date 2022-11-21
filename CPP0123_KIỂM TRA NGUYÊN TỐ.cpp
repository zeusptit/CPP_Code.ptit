#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int primeNumber(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main() {
    quick();
    int n;
    cin >> n;
    if(primeNumber(n))cout<<"YES"<<endl;else cout<<"NO"<<endl;
}
/*

*/
