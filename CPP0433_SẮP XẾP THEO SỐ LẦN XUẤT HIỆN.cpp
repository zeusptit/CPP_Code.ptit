#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

bool cmp(pair <int,int>& a,pair <int,int> &b)
{
    if(a.second != b.second)
        return a.second > b.second;
    return a < b;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int a[n];
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector < pair <int,int> > v;
        for(auto &it : mp)
            v.push_back(it);
        sort(v.begin(),v.end(),cmp);
        for(auto &x : v)
        {
            int k = x.second;
            for(int i=1;i<=k;i++)
                cout << x.first << " ";
        }
        cout << endl;
    }
    
}
/*
2
5
5 5 4 6 4
5
9 9 9 2 5
*/
