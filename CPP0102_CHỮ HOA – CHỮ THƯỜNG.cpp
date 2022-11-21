#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
    	char n;
    	cin >> n;
    	if(n<=97)cout<< char(n+32)<<endl;
    	else cout<< char (n-32)<<endl;
    }
}
/*

*/
