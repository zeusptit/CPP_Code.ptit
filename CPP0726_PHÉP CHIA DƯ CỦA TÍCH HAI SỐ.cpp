#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string a;
        ll b,c;
        cin >> a >> b >> c;
        ll res=0;
        for(int i=0;i<a.size();i++)
        {
            res = ( res * 10 + b * (a[i] - '0' )) % c;
        }
        cout << res << endl;
    }
}
/*

*/
