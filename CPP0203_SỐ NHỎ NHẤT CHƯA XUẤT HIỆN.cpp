#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int main() {
    quick();
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int a[100000];
        for(int i=0;i<n;i++) cin>>a[i];
        int x=1;
        while(1)
        {
            int stop=1;
            for(int i=0;i<n;i++)
            {
                if(a[i] == x)
                {
                    stop=0;
                    break;
                }
            }
            if(stop == 0)x++;
            else break;
        }
        cout<<x<<endl;
        
    }
}
/*

*/
