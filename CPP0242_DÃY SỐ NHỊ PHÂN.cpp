#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main(){
    quick();
    int test;
    cin >> test;
    while (test--)
    {
        int n;cin>>n;
        int a1[n],a2[n];
        for(int i=0;i<n;i++)
        	  cin >> a1[i];
        for(int i=0;i<n;i++)cin >> a2[i];
        int sum1,sum2,res=0;
        for(int i=0;i<n;i++)
        {
            sum1=0;sum2=0;
            for(int j=i;j<n;j++)
            {
                sum1+=a1[j];
                sum2+=a2[j];
                if(sum1==sum2)
                {
                    int l=j-i+1;
                    if(l>res)res=l;
                }
            }
        }
        cout << res << endl;
     }
}
/*
1
6
0 1 0 0 0 0
1 0 1 0 0 1
*/
