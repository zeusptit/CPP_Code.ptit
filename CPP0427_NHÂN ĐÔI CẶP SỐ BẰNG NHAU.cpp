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
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)cin >> a[i];
        vector <int> v;
        if(!a[0])v.push_back(a[0]);
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1] && a[i] == a[i+1])
            {
                a[i] *= 2;
                a[i+1] = 0;
                v.push_back(a[i + 1]);
            }else if(!a[i + 1])
                v.push_back(a[i + 1]);
        }
        for(int i=0;i<n;i++)
            if(a[i])
                cout << a[i] << " ";
        for(int x:v)cout << x << " ";
        cout << endl;
    }
}
/*

*/
