#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main() 
{
    quick();
    fstream file;
    file.open("VANBAN.in");
    set <string> se;
    string s;
    while (file >> s) {
        for(char &x:s)x = tolower(x);
        se.insert(s);
    }
    file.close();
    for(auto it:se)
        cout << it << endl;
}
/*

*/
