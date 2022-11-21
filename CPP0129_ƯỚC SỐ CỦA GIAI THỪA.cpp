#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,p;
        cin >> n >> p;
        int cnt = 0;
        while(n)
        {
            int temp = n;
            while(temp % p == 0)
            {
                temp /= p;
                cnt++;
            }
            n--;
        }
        cout<<cnt<<endl;
    }
    
}

/*

*/
