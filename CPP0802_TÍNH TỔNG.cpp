#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int ktra(string s) 
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] > '9' || s[i] < '0')
            return 0;
    if (s.length() > 10)return 0;
    return 1;
}
int main() 
{
    quick();
    long long res = 0;
    fstream file;
    file.open("DATA.in");
    while (1) {
        string s;
        file >> s;
        if (file.eof()) {
            break;
        }
        if (ktra(s)) {
            res += stoi(s);
        }
    }
    file.close();
    cout << res << endl;
}
/*

*/
