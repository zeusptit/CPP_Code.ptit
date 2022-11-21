#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,m,k;cin >> n >> m >> k;
        int a[105][105];
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin >> a[i][j];
        int d=0,hang=n-1,cot=m-1;
        vector<int>v;
        int l=max(m,n),t=0;
        while(d<l/2)
        {
            for(int i=d;i<=cot;i++)
            {
                if(t==n*m)break;
                t++;
                v.pb(a[d][i]);
            }
            for(int i=d+1;i<=hang;i++)
            {
                if(t==n*m)break;
                t++;
                v.pb(a[i][cot]);
            }
            for(int i=cot-1;i>=d;i--)
            {
                if(t==n*m)break;
                t++;
                v.pb(a[hang][i]);
            }
            for(int i=hang-1;i>d;i--)
            {
                if(t==n*m)break;
                t++;
                v.pb(a[i][d]);
            }
            d++;
            hang--;
            cot--;
        }
        cout << v[k-1];
        cout << endl;
    }
}
/*

*/
