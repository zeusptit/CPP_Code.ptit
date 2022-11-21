#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
bool check(int n)
{
    int cnt=0,tmp;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cnt++;
            tmp=0;
            while(n%i==0)
            {
                n/=i;
                tmp++;
                if(tmp==2)return false;
            }
        }
    }
    if(n!=1)cnt++;
    if(cnt==3)return true;
    return false;
}
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        if(check(n))cout<<"1"<<endl;else cout<<"0"<<endl;
    }
}
