
#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main(){
    quick();
    int n;cin >> n;
    vector<int>v;
    for(int i=0;i<n*n;i++)
    {
        int x;cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int a[100][100];
    int d=0,cot=n-1,hang=n-1,j=0;
    while(d<n*n/2)
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
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
