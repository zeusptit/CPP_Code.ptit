#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;
int solve(int a[],int n,int x)
{
    int l = 0,r = n - 1,res = -1;
    while(l <= r)
    {
    int m = ( l + r ) / 2 ;
    if(a[m] > x){
        res = m;
        r = m - 1;
    }
    else
        l = m + 1;
    }
    return res;
}
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b + n);
        for(int x : a)
        {
            int temp = solve(b,n,x);
            if(temp != -1)cout << b[temp] << " ";
            else cout << "_ ";
        }
        cout << endl;
    }
}
/*

*/
