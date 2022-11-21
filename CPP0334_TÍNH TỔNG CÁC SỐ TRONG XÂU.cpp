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
        int sum=0,res=0;
        s+="Cuong";
        for(char x:s)
        {
            if(isdigit(x)){
                res = res * 10 + x - '0';
            }else{
                sum = sum + res;
                res = 0;
            }
        }
        cout << sum << endl;
    }
}
/*
4
1abc23
geeks4geeks
1abc2x30yz67
123abc
*/
