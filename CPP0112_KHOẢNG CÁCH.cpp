#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int main() {
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        double xA,yA,xB,yB;
        cin >> xA >> yA >> xB >> yB;
        double res=sqrt((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB));
        cout<<fixed<<setprecision(4)<<res<<endl;
    }
}
/*

*/
