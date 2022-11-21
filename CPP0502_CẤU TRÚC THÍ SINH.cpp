#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

struct ThiSinh{
    string s,date;
    double x,y,z;
};

void nhap (ThiSinh &a)
{
    getline(cin,a.s);
    cin >> a.date;
    cin >> a.x >> a.y >> a.z;
}
 void in(ThiSinh a)
 {
    cout << a.s << " " << a.date << " ";
    double sum = a.x + a.y + a.z;
    cout << fixed << setprecision(1) << sum;
 }
 
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
