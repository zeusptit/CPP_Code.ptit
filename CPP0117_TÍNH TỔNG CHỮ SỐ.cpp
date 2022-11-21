#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int n;
void compact()
{
    int m=0;
    while(n)
    {
        m+=n%10;
        n/=10;
    }
    n=m;
}
int main() {
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        cin >> n;
        while(n>9)
        {
            compact();
        }
        cout<<n<<endl;
    }
}
/*

*/
