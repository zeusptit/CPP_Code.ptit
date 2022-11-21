#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main()
{ 
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        int d[3]={0};
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
            d[x]++;
        }
        for(int i=0;i<3;i++)
        {
            if(d[i])
            for(int j=1;j<=d[i];j++)cout<<i<<" ";
        }
        cout<<endl;
    }
}
/*

*/
