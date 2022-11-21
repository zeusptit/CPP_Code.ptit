#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

int solve(int a[],int n, int x)
{
    int curr_sum = 0, min_len = n + 1;
    int start = 0, end = 0;
    while (end < n) {
        while (curr_sum <= x && end < n)
            curr_sum += a[end++];
        while (curr_sum > x && start < n) {
            if (end - start < min_len)
                min_len = end - start;
            curr_sum -= a[start++];
        }
    }
    if(min_len > n)return -1;
    return min_len;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int &x:a)cin >> x;
        cout << solve(a,n,x) << endl;
    }
}
/*
                                                                                                    
*/
