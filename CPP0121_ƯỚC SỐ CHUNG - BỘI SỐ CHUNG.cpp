#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

long long gcd(long long a,long long b)
{
    while(b)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main() {
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        long long a,b;
        cin>>a>>b;
        cout<< (long long)a/gcd(a,b)*b <<" "<< (long long)gcd(a,b) <<endl;
    }
}

/*

*/
