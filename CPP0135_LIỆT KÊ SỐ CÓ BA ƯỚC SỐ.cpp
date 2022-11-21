#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

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
    int test;
    cin >> test;
    sang();
    while(test--)
    {
        int n;
        cin >> n;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(a[i] == 0)
            {
                cout<<i*i<<" ";
            }
        }
        cout<<endl;
    }
}
/*

*/
