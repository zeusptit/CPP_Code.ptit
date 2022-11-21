#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
 
int main()
{
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        string x1,x2;
        cin >> x1 >> x2;
        for(int i=0;i<x1.size();i++)if(x1[i]=='6')x1[i]--;
        for(int i=0;i<x2.size();i++)if(x2[i]=='6')x2[i]--;
        cout<<stoll(x1)+stoll(x2)<<" ";
        for(int i=0;i<x1.size();i++)if(x1[i]=='5')x1[i]++;
        for(int i=0;i<x2.size();i++)if(x2[i]=='5')x2[i]++;
        cout<<stoll(x1)+stoll(x2)<<endl;
    }
}
/*
2
645  666
5466 4555
*/
