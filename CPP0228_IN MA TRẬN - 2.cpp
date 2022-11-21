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
        int a[105][105];
        int n,k=1;cin >> n;
        for(int i=0;i<4*n;i++)
            for(int j=0;j<4*n;j++)
                a[i][j] = k++;
        vector<int>v1,v2;
        int h1=0,h2=4*n-1,c1=0,c2=4*n-1;
        int t=1;
        while(t < k)
        {
            for(int i=h2;i>=h1;i--)
            {
                if(t==k)break;
                v1.pb(a[i][c2]);
                t++;
            }
            c2--;
            for(int i=h1;i<=h2;i++)
            {
                if(t==k)break;
                v2.pb(a[i][c1]);
                t++;
            }
            c1++;
            for(int i=c2;i>=c1;i--)
            {
                if(t==k)break;
                v1.pb(a[h1][i]);
                t++;
            }
            h1++;
            for(int i=c1;i<=c2;i++)
            {
                if(t==k)break;
                v2.pb(a[h2][i]);
                t++;
            }
            h2--;
            for(int i=h1;i<=h2;i++)
            {
                if(t==k)break;
                v1.pb(a[i][c1]);
                t++;
            }
            c1++;
            for(int i=h2;i>=h1;i--)
            {
                if(t==k)break;
                v2.pb(a[i][c2]);
                t++;
            }
            c2--;
            for(int i=c1;i<=c2;i++)
            {
                if(t==k)break;
                v1.pb(a[h2][i]);
                t++;
            }
            h2--;
            for(int i=c2;i>=c1;i--)
            {
                if(t==k)break;
                v2.pb(a[h1][i]);
                t++;
            }
            h1++;
        }
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        for(int x:v1)cout<<x<<" ";
        cout<<endl;
        for(int x:v2)cout<<x<<" ";
        cout<<endl;
    }
}
/*
1 2 2 3 3

*/
