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
        sort(a,a + n);
        vector <int> v, z;
        if(n % 2 == 1)
        {
            for(int i=0;i<n/2+1;i++)v.push_back(a[i]);
            for(int i=n/2+1;i<n;i++)z.push_back(a[i]);
        }
        else{
            for(int i=0;i<n/2;i++)v.push_back(a[i]);
            for(int i=n/2;i<n;i++)z.push_back(a[i]);
        }
        int j = 0,k = 0;
        while(j<v.size()&&k<z.size())
        {
            cout << v[j++] << " " << z[k++] << " ";
        }
        while(j < v.size())
            cout << v[j++] << " ";
        while(k < z.size())
            cout << z[k++] << " ";
        cout << endl;
    }
}
/*

*/
