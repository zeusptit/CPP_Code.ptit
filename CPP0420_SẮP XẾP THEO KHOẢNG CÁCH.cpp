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
        int n,x;
        cin >> n >> x;
        int a[n],b[n];
        set <int> se;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i] = abs(x-a[i]);
            se.insert(b[i]);
        }
        for(int x:se)
        {
            for(int i=0;i<n;i++)
            {
                if(x == b[i])
                  cout << a[i] << " ";
            }
        }
        cout<<endl;
    }
}
/*

*/
