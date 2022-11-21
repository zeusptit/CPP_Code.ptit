#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int main() {
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        long n;
        cin >> n;
        int kt=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            while(n%i==0)
            {
                n /= i;
                cout<<i<<" ";
            }
        }
        if(n>1)cout<<n<<endl;else cout<<endl;
    }
}
/*

*/
