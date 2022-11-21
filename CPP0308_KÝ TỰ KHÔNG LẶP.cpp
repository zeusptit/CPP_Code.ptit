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
        int d[100001]={0};
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++)d[s[i]]++;
        for(int i=0;i<s.size();i++)
            if(d[s[i]] == 1)
                cout<<s[i];
        cout<<endl;
    }
}
/*

*/
