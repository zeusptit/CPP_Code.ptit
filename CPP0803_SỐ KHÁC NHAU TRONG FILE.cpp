#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main() 
{
    quick();
    int M[100000] = { 0 };
    fstream file;
    file.open("DATA.in");
    map <int,int> mp;
    int n;
    while (file >> n) {
        mp[n]++;
    }
    file.close();
    for(auto it:mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}
/*

*/
