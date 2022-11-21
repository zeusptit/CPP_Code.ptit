#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s ;
        vector<int>v;
        vector<char>str;
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                v.push_back(s[i]-'0');
            }else{
                str.push_back(s[i]);
            }
        }
        int sum=0;
        for(int x:v)sum += x;
        sort(str.begin(),str.end());
        for(char x:str)cout << x;
        cout << sum << endl;
    }
}
/*
2
AC2BEW3
ACCBA10D2EW30
*/
