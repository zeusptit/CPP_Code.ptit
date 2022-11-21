#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int main(){
    quick();
    int test;
    cin >> test;
    vector <string> v;
    while(test--)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    int cnt = 0;
    for(int i = 0 ; i < v.size(); i++)
    {
        for(int j = 0 ; j < v.size(); j++)
        {
            if(i != j && v[j].find(v[i]) != -1)
                cnt++;
        }
    }
    cout << cnt << endl;
}
/*

*/
