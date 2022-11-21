#include <iostream>
#include <string> 

 using namespace std; 
 
void solve(string &str)
{
    int s=0;
    for(int i=0;i<str.length();i++)
        s+=(str[i]-'0');
    str = to_string(s);
}
int main() 
{ 
    int test;
    cin >> test;
    while(test--)
    {
        string str;
        cin >> str;
        while(str.length()>1)
        {
            solve(str);
        }
        if(str =="9")cout << "1" << endl;else cout << "0" << endl;
    }
}
