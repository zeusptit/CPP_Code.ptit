#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

ll gcd(ll a,ll b)
{
    if(b == 0)return a;
    else return gcd(b,a % b);
}
 int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        ll a,temp=0;
        string b;
        cin >> a >> b;
        for(int i=0;i<b.size();i++)
            temp=(temp * 10 + (b[i] - '0')) % a;
        ll res = 1;
        res = gcd(a,temp);
        cout << res << endl;
    }
}
/*

*/
