#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int main() {
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        int l=s.size(),cnt=0;
        if(abs(s[0]-s[1])!=1)cnt++;
        if(abs(s[l-1]-s[l-2])!=1)cnt++;
        for(int i=1;i<l-1;i++)
            if(abs(s[i]-s[i+1])!=1||abs(s[i]-s[i+1])!=1)
            {
                cnt++;
            }
        if(cnt)cout<<"NO"<<endl;else cout<<"YES"<<endl;
    }
}
/*

*/
