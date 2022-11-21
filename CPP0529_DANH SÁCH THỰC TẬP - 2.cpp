#include<bits/stdc++.h>
using namespace std; 
 
struct SinhVien{
    int id;
    string MSV,name,clas,email,cpn;
};
 
typedef struct SinhVien SV;

int cmp(SV a,SV b)
{
    return a.MSV < b.MSV;
}
void sap_xep(SV s[],int n)
{   
    sort(s,s + n,cmp);
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    SV list[5000];
    for(int i = 0; i < n; i++) {
        list[i].id = i + 1;
        getline(cin,list[i].MSV);
        getline(cin,list[i].name);
        getline(cin,list[i].clas);
        getline(cin,list[i].email);
        getline(cin,list[i].cpn);
    }
    sap_xep(list, n);
    int q;cin >> q;
    while(q--)
    {
        string s;
        cin >> s;
        for(int i=0;i<n;i++)
        {
            if(s == list[i].cpn)
                cout << list[i].id << ' ' << list[i].MSV << ' ' << list[i].name << ' ' << list[i].clas << ' ' << list[i].email << ' ' << list[i].cpn << endl;
        }
    }
    return 0;
}
/*
6
B17DCCN016 
Le Khac Tuan Anh 
D17HTTT2   
test1@stu.ptit.edu.vn
VIETTEL
B17DCCN107 
Dao Thanh Dat    
D17CNPM5   
test2@stu.ptit.edu.vn
FPT
B17DCAT092 
Cao Danh Huy     
D17CQAT04-B
test3@stu.ptit.edu.vn
FPT
B17DCCN388 
Cao Sy Hai Long  
D17CNPM2   
test4@stu.ptit.edu.vn
VNPT
B17DCCN461 
Dinh Quang Nghia 
D17CNPM2   
test5@stu.ptit.edu.vn
FPT
B17DCCN554 
Bui Xuan Thai    
D17CNPM1   
test6@stu.ptit.edu.vn
GAMELOFT
1
FPT
*/
