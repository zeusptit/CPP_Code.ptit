#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int check(string s)
{
    if(s[0]=='0')return 2;
    set<char>se;
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            return 2;
            break;
        }else{
            se.insert(s[i]);
        }
    }
    if(se.size()!=10)return 0;
    return 1;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        if(check(s)==2)cout<<"INVALID"<<endl;else if(check(s)==1)cout<<"YES"<<endl;else cout<<"NO"<<endl;
    }
}
/*
3
01234aa32432432432534545b987978
123444444444444566666666667890
324562783924723543243243242354354354333234324
*/
