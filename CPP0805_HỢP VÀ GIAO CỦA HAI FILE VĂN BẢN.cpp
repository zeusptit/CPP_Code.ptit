#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

void solve(string &s)
{
    for(char &x:s)x = tolower(x);
}
int main() 
{
    quick();
    fstream file;
    file.open("DATA1.in");
    set <string> hop;
    map <string,int> giao;
    string s;
    while (file >> s) {
        solve(s);
        hop.insert(s);
        giao[s] = 1;
    }
    file.close();
    file.open("DATA2.in");
    while (file >> s) {
        solve(s);
        hop.insert(s);
        if(giao[s] == 1)
            giao[s] = 2;
    }
    file.close();
    for(auto it:hop)
        cout << it << " ";
    cout << endl;
    for(auto it:giao)
    {
        if(giao[it.first] == 2)
            cout << it.first << " ";
    }
}
/*

*/
