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
        int n,k;
        cin >> n >> k;
        int m[n];
        for(int i=0;i<n;i++)cin >> m[i];
        int a = 0,b = 0;
        for(int i=0;i<n;i++)
        {
            if(m[i] <= k)a++;
        }
        for(int i=0;i<a;i++)
        {
            if(m[i] > k)b++;
        }
        int  c = b;
        for(int i=0,j=a;j<n;i++,j++)
        {
            if(m[i] > k)b--;
            if(m[j] > k)b++;
            c = min(c,b);
        }
        cout << c << endl;
     }
}
/*

*/
