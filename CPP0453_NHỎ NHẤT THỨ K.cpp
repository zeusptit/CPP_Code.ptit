#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int binary_search(ll a[],int l,int r,ll s)
{
    if(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == s)return mid;
        if(a[mid] > s)return binary_search(a,l,mid - 1,s);
        else return binary_search(a,mid + 1,r,s);
    }
    return -1;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,k;cin >> n >> k;
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            int x;cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout << v[k - 1] << endl;
    }
}
/*
2
5
3 1 4 6 5
3
1 1 1
*/
