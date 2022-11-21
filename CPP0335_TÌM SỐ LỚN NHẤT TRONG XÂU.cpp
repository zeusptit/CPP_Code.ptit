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
        int res=0,temp=0,final=0;
        s+="Cuong";
        for(char x:s)
        {
            if(isdigit(x)){
                temp = temp * 10 + x - '0';
            }else{
                res=+temp;
                temp=0;
            }
            if(res>final)final = res;
        }
        cout << final << endl;
    }
}
/*
100klh564abc365bg
abvhd9sdnkjdfs
abchsd0sdhs
*/
