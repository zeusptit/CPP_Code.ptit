#include<iostream>
 #include<string> 
 using namespace std; 
 int main() 
 { 
    int k; 
    cin>>k; 
    while(k--)
    { 
        string s; 
        int t=-1; 
        cin>>s; 
        for(int i=s.size()-1;i>0; i--)
        { 
            if(s[i]>=s[i-1]) continue; 
            else{ 
                int max=s[i]; 
                int u=i; 
                for(int j=i; j<s.size(); j++)
                { 
                    if(s[j]>max && s[j]<s[i-1])
                    {
                        max=s[j];
                        u=j;
                    } 
                }
                swap(s[u],s[i-1]);
                t=0; 
                break; 
            } 
        } 
        if(t==-1) cout<<"-1"<<endl; else if(s[0]=='0')
        { 
            for(int i=1; i<s.size(); i++) 
                cout<<s[i]; cout<<endl; 
        } else cout<<s<<endl; 
    } 
}
