#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int m,n,a,b,cnt=0;
        cin >> m >> n >> a >> b;
        for(int i=m;i<=n;i++)
            if(i%a==0||i%b==0)
              cnt++;
        cout<<cnt<<endl;
    }
}
