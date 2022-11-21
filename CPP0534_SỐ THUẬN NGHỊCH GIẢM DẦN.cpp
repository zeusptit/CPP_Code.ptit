#include<bits/stdc++.h>
using namespace std; 
 
struct Pangram{
    string num;
    int freq;
};

typedef struct Pangram pgr;

int find(pgr a[],int n,string temp)
{
    for(int i=0;i<n;i++)
        if(a[i].num == temp)return i;
    return -1;
}
int cmp(pgr a,pgr b)
{
    if(a.num.size() != b.num.size())
        return a.num.size() > b.num.size();
    return a.num > b.num;
}
bool check(string s)
{
    int n = s.size();
    if(n <= 1)return false;
    for(int i=0;i<n/2;i++)
        if(s[i] != s[n - i - 1])
            return false;
    return true;
}
 int main(){
    pgr a[1000];
    int n=0;
    string s;
    while(cin >> s)
    {
        if(check(s))
        {
            int index = find(a,n,s);
            if(index == -1)
            {
                a[n].num = s;
                a[n].freq = 1;
                n++;
            }else{
                a[index].freq++;
            }
        }
    }
    sort(a,a + n,cmp);
    for(int i=0;i<n;i++)
    {
        cout << a[i].num << " " << a[i].freq << endl;
    }
}
/*
12321 456 12321 34 56 9999999999999999999
12 3 43 34 54 34 54 34 54 657
5 45 554 12321 12321
65 76 45 45 34 53
546 565 65645 6 65 65 35 65
565 565
*/
