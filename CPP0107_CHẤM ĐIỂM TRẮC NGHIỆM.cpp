#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

char frt[20]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}, scd[20]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

int main() {
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int tp,cnt=0;
        cin >> tp;
        string s;
        for(int i=0;i<15;i++)cin >> s[i];
        double score=10;    
        if(tp==101)
        {
            for(int i=0;i<15;i++)
            {
                if(s[i]!=frt[i])score-=(double)10/15;
            }
        }else if(tp==102){
            for(int i=0;i<15;i++)
            {
                if(s[i]!=scd[i])score-=(double)10/15;
            }
        }
        //score=cnt*10/15;
        cout<<fixed<<setprecision(2)<<score<<endl;
    }
}
/*

*/
