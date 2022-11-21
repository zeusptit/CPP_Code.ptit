#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

string s;
int solve(int k)
{
    int n=s.size(),cnt=0;
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=i;j<n;j++)
        {
            temp=temp*10+s[j]-'0';
            temp%=k;
            if(temp==0)cnt++;
        }
    }
    return cnt;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        cin >> s;
        cout<<solve(8)-solve(24)<<endl;
    }
}
/*

*/
