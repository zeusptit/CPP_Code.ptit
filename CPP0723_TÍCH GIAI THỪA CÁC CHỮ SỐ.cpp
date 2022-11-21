#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int main() {
    int test;
    cin >> test;
    while(test--)
    {
        int n;cin >> n;
        string s,res;
        cin >> s;
        for(int i=0;i<n;i++)
        {
            switch(s[i])
            {
                case'2':
                    res += "2";
                    break;
                case'3':
                    res += "3";
                    break;
                case'4':
                    res += "322";
                    break;
                case'5':
                    res += "5";
                    break;
                case'6':
                    res += "53";
                    break;
                case'7':
                    res += "7";
                    break;
                case'8':
                    res += "7222";
                    break;
                case'9':
                    res += "7332";
                    break;
                default:break;
            }
        }
        sort(res.begin(),res.end());
        for(int i=res.length()-1;i>=0;i--)
        cout << res[i];
        cout << endl;
    }
}
