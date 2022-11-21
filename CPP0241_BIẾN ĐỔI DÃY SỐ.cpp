#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int solve(int arr[], int n)
{
    int ans = 0;
    for (int i=0,j=n-1; i<=j;)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] > arr[j])
        {
            j--;
            arr[j] += arr[j+1] ;
            ans++;
        }
        else
        {
            i++;
            arr[i] += arr[i-1];
            ans++;
        }
    }
    return ans;
}
int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++)cin >> a[i];
        cout << solve(a, n) << endl; 
    }
}
