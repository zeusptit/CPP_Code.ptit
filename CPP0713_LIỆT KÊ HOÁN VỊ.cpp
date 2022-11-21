#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int n,k,a[1005],ok;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        cin >> n;
        for(int i=0;i<n;i++)
        {
            a[i] = i + 1;
        }
        do{
            for(int i=0;i<n;i++)
                cout << a[i];
            cout << " ";
        }while(next_permutation(a,a + n));
        cout << endl;
    }
}
/*

*/
