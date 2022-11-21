#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main()
{ 
    quick();
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string s;
        cin >> s;
        int l=s.size(),cnt=0;
        for(int i=0;i<l;i++)
        {
            for(int j=i;j<l;j++)
            {
                if(s[i]==s[j])
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
}
/*

*/
