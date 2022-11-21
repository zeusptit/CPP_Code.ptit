#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,m;cin >> n >> m;
        int a[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin >> a[i][j];
        vector<int>v;
        v.push_back(-1);
        int d=0,cot=m-1,hang=n-1,j=0, k=max(m,n);
        while(d<k/2+1)
        {
            for(int i=d;i<=cot;i++)v.push_back(a[d][i]);
            for(int i=d+1;i<=hang;i++)v.push_back(a[i][cot]);
            for(int i=cot-1;i>=d;i--)v.push_back(a[hang][i]);
            for(int i=hang-1;i>d;i--)v.push_back(a[i][d]);
            for(int i=0;i<v.size()-1;i++)
            {
                if(v[i]==-1)
                {
                    swap(v[i],v[v.size()-1]);
                    break;
                }
            }
            d++;
            hang--;
            cot--;
        }
        k=v.size();
        if(v[k-2]==-1)swap(v[k-2],v[k-1]);
        d=0,cot=m-1,hang=n-1,j=0, k=max(m,n);
        while(d<k/2+1)
        {
            for(int i=d;i<=cot;i++)a[d][i]=v[j++];
            for(int i=d+1;i<=hang;i++)a[i][cot]=v[j++];
            for(int i=cot-1;i>=d;i--)a[hang][i]=v[j++];
            for(int i=hang-1;i>d;i--)a[i][d]=v[j++];
            d++;
            hang--;
            cot--;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
/*
2
4 4
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
5 1 2 3 9 10 6 4 13 11 7 8 14 15 16 12
*/
