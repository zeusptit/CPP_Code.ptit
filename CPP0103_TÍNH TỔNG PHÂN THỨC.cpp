#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int main(){
    quick();
    int n;
    cin>>n;
    double s=0;
    for(double i=1;i<=n;i++)s+=1/i;
    printf("%.4lf",s);
}
/*

*/
