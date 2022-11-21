#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int mod=1000000007;
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        while(s.find("100") != string::npos)
        {
            auto it = s.find("100");
            s.erase(s.begin() + it,s.begin() + it + 3);
            cnt += 3;
        }
        if(cnt)cout << cnt << endl;
    }
}
/*

*/
