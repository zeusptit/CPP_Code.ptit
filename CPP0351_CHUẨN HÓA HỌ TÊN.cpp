#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main(){
    quick();
    int test;
    cin >> test;
    cin.ignore();
    while(test--)
    {
        string s;
        int n;cin >> n;
        cin.ignore();
        getline(cin,s);
        stringstream ss(s);
        string temp,res="";
        while(ss >> temp)
        {
            res += toupper(temp[0]);
            for(int i=1;i<temp.length();i++)
              res += tolower(temp[i]);
            res += " ";
        }
        res.erase(res.length()-1);
        if(n==1)
        {
            stringstream sss(res);
            string tmp;
            vector<string>v;
            while(sss >> tmp)
                v.push_back(tmp);
            cout << v[v.size()-1] << " ";
            for(int i=0;i<v.size()-1;i++)cout << v[i] << " ";
            cout << endl;
        }else{
            stringstream sss(res);
            string tmp;
            vector<string>v;
            while(sss >> tmp)
                v.push_back(tmp);
            for(int i=1;i<v.size();i++)cout << v[i] << " ";
            cout << v[0] << endl;
        }
    }
}
/*
2
1
NguyeN    vAn    Nam
2
hoAng  le Nhat THONG chi
*/
