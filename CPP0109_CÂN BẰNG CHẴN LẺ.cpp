#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int check(int n)
{
    int dc=0,dl=0,temp;
    while(n)
    {
        temp=n%10;
        n/=10;
        if(temp%2==1)dl++;else dc++;
    }
    if(dc!=dl)return 0;
    return 1;
}

int main() {
    quick();
    int n;
    cin>>n;
    int a=pow(10,n-1),b=pow(10,n)-1,opt=0;
    for(int i=a;i<=b;i++)
    {
        if(check(i))
        {
            if(opt==10)
            {
                cout<<endl;
                opt=0;
            }
            cout<<i<<" ";
            opt++;
        }
    }
}
/*

*/
