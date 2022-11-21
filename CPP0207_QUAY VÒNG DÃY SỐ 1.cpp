#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int a[1000001];
int main() {
    quick();
    int test;
    cin>>test;
    while(test--)
    {
        int n,d;
        cin >> n >> d;
        for(int i=0;i<n;i++)cin >> a[i];
        d=d%n;
        for(int i=d;i<n;i++)cout << a[i] << " ";
        for(int j=0;j<d;j++)cout << a[j] << " ";
        cout<<endl;
    }
}
/*

*/
