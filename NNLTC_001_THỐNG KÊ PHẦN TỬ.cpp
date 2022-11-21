#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main()
{
    int n;
    map <int,int> mp;
    vector <int> v;
    while(cin >> n)
    {
        v.push_back(n);
        mp[n]++;
    }
    for(int x:v)
    {
        if(mp[x])
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}
/*

*/
