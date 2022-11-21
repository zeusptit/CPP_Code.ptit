#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int a[1000001]={0};
void sang()
{
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=1000000;i++)
    {
        for(int j=i*2;j<=1000000;j+=i)
        {
            a[j]=1;
        }
    }
}
int main() {
    quick();
    sang();
    int test;
    cin >> test;
    while(test--)
    {
        int n,kt = 0;
        cin >> n;
        for(int i=2;i<=n/2;i++)
        {
            if(a[i]==0&&a[n-i]==0)
            {
                cout<<i<<" "<<n-i<<" ";
                kt = 1;
                break;
            }
        }
        if(kt == 0)cout<<"-1";
        cout<<endl;
    }
}

/*

*/
