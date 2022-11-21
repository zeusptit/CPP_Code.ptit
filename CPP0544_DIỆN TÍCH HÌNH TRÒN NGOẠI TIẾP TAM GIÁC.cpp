#include<bits/stdc++.h>
using namespace std; 
 
#define PI 3.141592653589793238

struct triangle{
    double xA,yA,xB,yB,xC,yC;
    double a,b,c,S,R;
};

typedef struct triangle tag;

double P(double a,double b,double c)
{
    return (a + b + c) / 2;
}
double c(double xA,double yA,double xB,double yB)
{
    return sqrt((xA - xB) * (xA - xB) + (yA - yB) * (yA - yB));
}
double s(double a,double b,double c)
{
    return sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b)) / 4;
}
int main(){
    int n;cin >> n;
    tag a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i].xA >> a[i].yA >> a[i].xB >> a[i].yB >> a[i].xC >> a[i].yC;
        a[i].a = c(a[i].xA,a[i].yA,a[i].xB,a[i].yB);
        a[i].b = c(a[i].xB,a[i].yB,a[i].xC,a[i].yC);
        a[i].c = c(a[i].xC,a[i].yC,a[i].xA,a[i].yA);
        a[i].S = s(a[i].a,a[i].b,a[i].c);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i].a + a[i].b > a[i].c && a[i].a + a[i].c > a[i].b && a[i].b + a[i].c > a[i].a)
        {
            a[i].R = a[i].a * a[i].b * a[i].c / (4 * a[i].S);
            double temp = a[i].R * a[i].R * PI;
            cout << fixed << setprecision(3) << temp << endl;
        }
        else cout << "INVALID" << endl;
    }
}
/*
3
0 0 0 5 0 199
1 1 1 1 1 1
0 0 0 5 5 0
*/
