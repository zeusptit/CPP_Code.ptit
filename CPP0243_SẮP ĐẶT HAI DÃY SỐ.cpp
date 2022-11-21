#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n, m;
        cin >> n >> m;
        map<int,int>mp,mp2,dlv;
        int a[n], b[m];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            dlv[a[i]]=1;
        }
        for(int i=0;i<m;i++)
        {
            cin >> b[i];
            if(dlv[b[i]]==1)dlv[b[i]]=2;
            mp2[b[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            if(mp2[b[i]])
            {
                for(int j=1;j<=mp[b[i]];j++)
                    cout<<b[i]<<" ";
                mp2[b[i]]=0;
            }
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(dlv[a[i]]==1)v.pb(a[i]);
        }
        sort(v.begin(),v.end());
        for(int x:v)cout << x << ' ';
        cout << endl;
    }
}
/*

*/
