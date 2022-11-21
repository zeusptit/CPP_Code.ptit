#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){ 
    int t; 
    cin >> t; 
    while(t--)
    { 
        int m,n,p; 
        cin >> m >> n >> p; 
        long long a[m],b[n],c[p]; 
        for(int i=0;i<m;i++) cin >> a[i]; 
        for(int i=0;i<n;i++) cin >> b[i]; 
        for(int i=0;i<p;i++) cin >> c[i]; 
        int check=0,x=0,y=0,z=0; 
        while(x < m && y < n && z < p)
        { 
            if(a[x] == b[y] && a[x] == c[z]){ 
                cout << a[x] << " "; 
                check = 1; 
                x++;
                y++;
                z++; 
            } 
            else if(a[x] < b[y] || a[x] < c[z]) x++; 
            else if(b[y] < a[x] || b[y] < c[z]) y++; 
            else if(c[z] < a[x] || c[z] < b[y]) z++; 
        } 
        if(check == 0)cout << "-1"; 
        cout << endl; 
    } 
}
/*

*/
