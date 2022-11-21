#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

void solve(string x,string y)
{
    int temp=0;
    while(y.length()<x.length())y='0'+y;
    while(x.length()<y.length())x='0'+x;
    int n= x.length(),m= y.length();
    vector<int>v;
    string res="";
    for(int i=n-1;i>=0;i--)
    {
        int k = x[i] + y[i] -'0' -'0'+ temp;
        if(k > 9)
        {
            temp = 1;
            res = char(k % 10 + '0') + res;
        }else{
            temp = 0;
            res = char(k + '0') + res;
        }
    }
    if(temp>0)res = "1" + res;
    cout << res << endl;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string x,y;
        cin >> x >> y;
        solve(x,y);
    }
}
/*
1
12
198111
*/
