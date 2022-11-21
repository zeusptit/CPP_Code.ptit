#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

bool check(string s)
{
    int n=s.length();
    for(int i=0;i<n;i++)
        if(s[i]!=s[n-i-1])return false;
    return true;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string s,final;
        cin >> s;
        for(int i=0;i<s.length();i++)s[i] = tolower(s[i]);
        for(int i=0;i<s.length();i++)
        {
            switch(s[i])
            {
                case 'a':
                  final+="2";
                  break;
                case 'b':
                  final+="2";
                  break;
                case 'c':
                  final+="2";
                  break;
                case 'd':
                  final+="3";
                  break;
                case 'e':
                  final+="3";
                  break;
                case 'f':
                  final+="3";
                  break;
                case 'g':
                  final+="4";
                  break;
                case 'h':
                  final+="4";
                  break;
                case 'i':
                  final+="4";
                  break;
                case 'j':
                  final+="5";
                  break;
                case 'k':
                  final+="5";
                  break;
                case 'l':
                  final+="5";
                  break;
                case 'm':
                  final+="6";
                  break;
                case 'n':
                  final+="6";
                  break;
                case 'o':
                  final+="6";
                  break;
                case 'p':
                  final+="7";
                  break;
                case 'q':
                  final+="7";
                  break;
                case 'r':
                  final+="7";
                  break;
                case 's':
                  final+="7";
                  break;
                case 't':
                  final+="8";
                  break;
                case 'u':
                  final+="8";
                  break;
                case 'v':
                  final+="8";
                  break;
                case 'w':
                  final+="9";
                  break;
                case 'x':
                  final+="9";
                  break;
                case 'y':
                  final+="9";
                  break;
                case 'z':
                  final+="9";
                  break;
              }
          }
          if(check(final))cout<<"YES"<<endl;else cout<<"NO"<<endl;
      }
}
/*
2
BOHIMA
IamACoder
*/
