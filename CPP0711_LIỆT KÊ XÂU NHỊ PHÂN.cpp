#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int n,a[100],ok,test;
void ktao()
{
    for(int i=1;i<=n;i++) a[i] = 0;
}
void sinh()
{
    int i=n;
    while(i >= 1 && a[i] == 1)
    {
        a[i]=0;
        i--;
    } 
    if(i == 0)ok = 0; else a[i] = 1;
}
int main() {
    cin >> test;
    while(test--)
    {
        cin >> n;
        ktao();
        ok=1;
        while(ok)
        {
          for(int i=1;i<=n;i++) cout << a[i];
          cout << " ";
          sinh();
        }
        cout << endl;
    }
}
