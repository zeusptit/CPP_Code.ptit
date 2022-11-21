#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main()
{ 
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,m;
        cin >> n >> m;
        vector<int>a(n),b(m);
        for(int &x : a)cin >> x;
        for(int &x : b)cin >> x;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i = 0,j = 0;
        while(i < n && j < n)
        {
            if(a[i] < b[j]){
                cout << a[i] << " ";
                i++;
            }
            else{
                cout << b[j] << " ";
                j++;
            }
        }
        while(i < n)
        {
            cout << a[i] << " ";
            i++;
        }
        while(j < m)
        {
            cout << b[j] << " ";
            j++;
        }
        cout << endl;
    }
}
/*

*/
