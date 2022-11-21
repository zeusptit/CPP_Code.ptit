#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

struct Point{
    int x,y;
};

typedef struct Point Point;

double S(int a,int b,int c,int d,int e,int f) {
    double x = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    double y = sqrt((e - c) * (e - c) + (f - d) * (f - d));
    double z = sqrt((e - a) * (e - a) + (f - b) * (f - b));
    double s = sqrt((x + y + z) * (x + y - z) * (y + z - x) * (z + x - y)) * 1.0 / 4;
    return s;
}

int main(){
    quick();    
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        Point P[1000];
        for(int i = 0; i < n; i++)cin >> P[i].x >> P[i].y;
        double s = 0;
        for(int i = 1; i < n - 1; i++)
        {
            s += S(P[0].x,P[0].y,P[i].x,P[i].y,P[i + 1].x,P[i + 1].y);
        }
        cout << fixed << setprecision(3) << s << endl;
    }
}
/*

*/
