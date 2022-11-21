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
    while(test--)
    {
        vector <int> res;
        int min,pos;
        string s;
        cin >> s;
        if(s[0] == 'I')
        {
            res.pb(1);
            res.pb(2);
            min = 3;
            pos = 1;
        }else{
            res.pb(2);
            res.pb(1);
            min = 3;
            pos = 0;
        }
        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] == 'I')
            {
                res.pb(min);
                min++;
                pos = i + 1;
            }else{
                res.pb(res[i]);
                for(int j = pos; j <= i; j++)res[j]++;
                min++;
            }
        }
        for(int i = 0; i < res.size(); i++)
            cout << res[i];
        cout << endl;
    }
}
/*

*/
