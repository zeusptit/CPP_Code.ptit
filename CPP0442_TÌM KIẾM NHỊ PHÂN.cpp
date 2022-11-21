#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int search(int a[],int l,int r,int x)
{
    if(l <= r)
    {
        int mid = ( l + r ) / 2;
        if(a[mid] == x)return 1;
        if(a[mid] > x)return search(a,l,mid - 1,x);
        else return search(a,mid + 1,r,x);
    }
    return 0;
}

int main()
{ 
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];    
        }
        if(search(a,0,n - 1,x))cout << "1" << endl;else cout << "-1" << endl;
    }
}
/*

*/
