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
    cin.ignore();
    while(test--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        vector<int>v;
        while(ss >> tmp)
        {
            int x = stoi(tmp);
            v.push_back(x);
        }
        int dc=0,dl=0,n=v.size();
        for(int i=0;i<n;i++)if(v[i]%2==0)dc++;else dl++;
        if(n%2==0)
        {
            if(dc>dl)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            if(dl>dc)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
/*

*/
