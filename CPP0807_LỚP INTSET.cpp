#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main() 
{
    quick();
    fstream file;
    file.open("DATA.in");
    map <int,int> giao;
    vector <int> v;
    int n;
    while(file >> n)
    {
        v.push_back(n);
    }
    file.close();
    for(int i=2;i<v[0]+2;i++)giao[v[i]] = 1;
    for(int i=v[0]+2;i<v.size();i++)
    {
        if(giao[v[i]] == 1)
            giao[v[i]] = 2;
    }
    for(auto it:giao)
    {
        if(giao[it.first] == 2)
            cout << it.first << " ";
    }
}
/*

*/
