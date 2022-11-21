#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
void solve()
{ 
    int n; 
    cin >> n; 
    int a[n][n]; 
    int b[100001]; 
    set<int>se;
    memset(b,0,sizeof(b)); 
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++)
        { 
            cin>>a[i][j]; 
            if(b[a[i][j]]==i)b[a[i][j]]+=1; 
            if(b[a[i][j]]==n)se.insert(a[i][j]);
        } 
    } 
    cout << se.size();
} 
int main(){ 
    int test; 
    cin >> test; 
    while(test--)
    { 
        solve(); 
        cout << endl; 
    } 
}
