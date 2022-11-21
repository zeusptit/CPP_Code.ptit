#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

struct Point{
    int x,y,z,c;
};

typedef struct Point Point;

void in(Point &a){
    cin >> a.x >> a.y >> a.z;
}

int det(int x1,int y1,int x2,int y2)
{
    return x1 * y2 - y1 * x2;
}

Point vec(Point a,Point b)
{
    Point c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    c.z = a.z - b.z;
    return c;
}
Point nor(Point a, Point b,Point c)
{
    Point v1 = vec(a,b), v2 = vec(b,c);
    Point d;
    d.x = det(v1.y,v1.z,v2.y,v2.z);
    d.y = det(v1.z,v1.x,v2.z,v2.x);
    d.z = det(v1.x,v1.y,v2.x,v2.y);
    return d;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        Point a[4];
        for(int i = 0; i < 4; i++)
            in(a[i]);
        Point tmp = nor(a[0],a[1],a[2]);
        tmp.c = + tmp.x * a[0].x + tmp.y * a[0].y + tmp.z * a[0].z;
        int temp = - tmp.x * a[3].x - tmp.y * a[3].y - tmp.z * a[3].z + tmp.c ;
        if(temp == 0)
            cout << "YES" <<endl;
        else 
            cout << "NO" << endl;
    }
}
/*

*/
