#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int cmp(int a,int b)
{
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;cin >> n;
        int a[n];
        for(int &x : a)cin >> x;
        sort(a,a + n,cmp);
        for(int i=0;i<n;i++)
            cout << a[i];
        cout << endl;
    }
}
/*

*/
