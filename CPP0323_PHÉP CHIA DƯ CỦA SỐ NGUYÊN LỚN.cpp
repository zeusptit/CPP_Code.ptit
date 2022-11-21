#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int test;
    cin>>test; 
    while(test--)
    { 
        string a; 
        long long b,j=0; 
        cin>>a>>b; 
        int s1[1000]; 
        int k=a.size(); 
        for(int i=0;i<k;i++)
        { 
            s1[i]=a[i]-'0'; 
            for(int i=0;i<k;i++)
                j = (j * 10 + s1[i]) % b; 
            cout << j << endl; 
        }
    }
}
/*

*/
