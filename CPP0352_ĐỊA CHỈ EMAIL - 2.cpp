#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
    quick();
    int test;
    cin >> test;
    cin.ignore();
    map<string,int>mp;
    while(test--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string temp,res="";
        while(ss >> temp)
        {
            for(int i=0;i<temp.length();i++)
                res += tolower(temp[i]);
            res += " ";
        }
        res.erase(res.length()-1);
        stringstream sss(res);
        string tmp;
        vector<string>v;
        string final = "";
        while(sss >> tmp)
        {
            v.push_back(tmp);
        }
        final += v[v.size()-1];
        for(int i=0;i<v.size()-1;i++)
            final += v[i][0];
        mp[final]++;
        if(mp[final] == 1)
        {
            cout << final  << "@ptit.edu.vn" << endl;
        }
        else cout << final << mp[final] << "@ptit.edu.vn" << endl;
    }
}
/*
4
    nGUYEn    quaNG   vInH  
   tRan   thi THU    huOnG
   nGO   quoC  VINH
 lE            tuAn    aNH
*/
