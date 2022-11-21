#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main() {
    quick();
    int n;
    cin >> n;
    cin.ignore();
    set<string>se;
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        se.insert(s);
    }
    cout << se.size();
}
/*

*/
