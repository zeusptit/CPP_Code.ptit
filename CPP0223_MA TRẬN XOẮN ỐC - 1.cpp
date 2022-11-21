#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

void in(int a[][100],int n,int m)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
}

int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,m;
        cin >> n >> m;
        int a[100][100];
        in(a,n,m);
        int d=0,hang=n-1,cot=m-1,t=0,k=max(n,m);
        while(d<k/2)
        {
            for(int i=d;i<=cot;i++)
            {
                if(t==n*m)break;
                t++;
                cout<<a[d][i]<<" ";
            }
            for(int i=d+1;i<=hang;i++)
            {
                if(t==n*m)break;
                t++;
                cout<<a[i][cot]<<" "; 
            }
            for(int i=cot-1;i>=d;i--)
            {
                if(t==n*m)break;
                t++;
                cout<<a[hang][i]<<" ";
            }
            for(int i=hang-1;i>d;i--)
            {
                if(t==n*m)break;
                t++;
                cout<<a[i][d]<<" ";
            }
            d++;
            hang--;
            cot--;
        }
        cout<<endl;
    }
}
