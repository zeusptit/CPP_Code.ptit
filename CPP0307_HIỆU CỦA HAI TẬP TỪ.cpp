#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
int main()
{
    quick();
    int test;
    cin >> test;
    cin.ignore();
    while(test--)
    {
        set<string>se1,se2;
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        stringstream ss(s1);
        string tmp,temp;
        while(ss >> tmp)
            se1.insert(tmp);
        stringstream sss(s2);
        while(sss >> temp)
            se2.insert(temp);
        for(auto it:se1)
        {
            if(se2.find(it)!=se2.end())continue;
            else cout<<it<<" ";
        }
        cout<<endl;
    }
}
/*
2
abc ab ab ab abcd
ab abc
aaa xyz ab zzz abc dd dd abc
xyz dd ttt sas cdc
*/
