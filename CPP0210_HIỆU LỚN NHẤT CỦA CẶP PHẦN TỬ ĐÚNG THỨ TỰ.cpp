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
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++)cin >> a[i];
        int max=-1;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(j>i && (a[j]-a[i])>max)
                    max=a[j]-a[i];
        cout<<max<<endl;
    }
}
