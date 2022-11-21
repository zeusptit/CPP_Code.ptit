#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int main() {
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int a[100000];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int min=99999999;
        for(int i=0;i<n-1;i++)
        {
            if(min>abs(a[i]-a[i+1]))
                min=abs(a[i]-a[i+1]);
        }
        cout<<min<<endl;
    }
}
/*

*/
