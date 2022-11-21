#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int no = 1;
class SinhVien{
    public:
        string msv;
        string name;
        string clas;
        string email;
        friend istream &operator >> (istream &in, SinhVien &A)
        {
            if (no++ == 1)cin.ignore();
            getline(in, A.msv);
            getline(in, A.name);
            getline(in, A.clas);
            getline(in, A.email);
            return in;
        }
        friend ostream &operator << (ostream &out, SinhVien A)
        {
            out << A.msv << " " << A.name << " " << A.clas << " " << A.email << " " << endl;
            return out;
        }

};
bool cmp(SinhVien A, SinhVien B)
{
    if (A.clas != B.clas) 
        return A.clas < B.clas;
    else 
        return A.msv < B.msv;
}
string proc(string s)
{
    string x = "DC",tmp;
    stringstream ss(s);
    while (ss >> tmp)
    {
        if (x.length() < 4)x = x + tmp[0];
    }
    return x;
}
string up(string s)
{
    for (int i=0; i<s.length(); i++) s[i] = toupper(s[i]);
    return s;
}
int main(){
    SinhVien ds[1001];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s,x = "";
        getline(cin, s);
        s = up(s);
        x = proc(s);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        for (i=0; i<N; i++)
        {
            if (x == "DCCN" && ds[i].clas[0] == 'E') continue;
            else
            if (x == "DCAT" && ds[i].clas[0] == 'E') continue;
            else
            if (ds[i].msv.find(x) != -1) cout << ds[i];
        }
    }
    return 0;
}
/*
4
B16DCCN011
Nguyen Trong Duc Anh
E16CNPM1
sv1@stu.ptit.edu.vn
B15DCCN215
To Ngoc Hieu
D15CNPM3
sv2@stu.ptit.edu.vn
B15DCKT150
Nguyen Ngoc Son
D15CQKT02-B
sv3@stu.ptit.edu.vn
B15DCKT199
Nguyen Trong Tung
D15CQKT02-B
sv4@stu.ptit.edu.vn
2
Ke toan
Cong nghe thong tin
*/  
