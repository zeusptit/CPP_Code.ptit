#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
#define pb push_back

int main(){
    quick();
    string s;
    vector<string>vs;
    while(cin >> s)vs.pb(s);
    for(int i=0;i<vs.size();i++)
        for(int j=0;j<vs[i].size();j++)
            vs[i][j]=tolower(vs[i][j]);
    int check = 1;
    for(string i:vs)
    {
        if(i[i.length()-1]=='.'||i[i.length()-1]=='!'||i[i.length()-1]=='?')
        {
            if(check)i[0]=toupper(i[0]);
            i.erase(i.end()-1);
            if(i!="")cout<<i;
            cout<<endl;
            check=1;
        }else{
            if(check)
            {
                i[0]=toupper(i[0]);
                cout<<i<<' ';
                check=0;
            }else{
                cout<<i<<' ';
            }
        }
    }
}
/*
ky thi LAP TRINH ICPC PTIT  bat dau to chuc     tu     nam 2010. nhu vay, nam nay la          tron 10 nam!
    vay CO PHAI NAM NAY LA KY THI LAN THU 10?        khong phai! nam nay la KY THI LAN THU 11.
*/
