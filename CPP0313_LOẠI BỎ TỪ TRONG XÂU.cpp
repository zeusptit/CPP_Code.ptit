#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main() {
    quick();
    string s,k;
    getline(cin,s);
    cin >> k;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        if(tmp == k)continue;
        cout << tmp << " ";
    }
}
/*

*/
