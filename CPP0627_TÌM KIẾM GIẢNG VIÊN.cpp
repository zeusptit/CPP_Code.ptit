#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


string chuan(string bm)
{
    string res = "";
    stringstream ss(bm);
    string token;
    while(ss >> token)
    {
        res += toupper(token[0]);
    }
    return res;
}

string getname(string name)
{
    string res,token;
    stringstream ss(name);
    while(ss >> token)
        res = token;
    return res;
}
class GiangVien{
    private:
        string name;
        string bm,ma;
        static int cnt;
    public:
        void nhap();
        void xuat();
        string getTen()
        {
            return name;
        }
        string getBm()
        {
            return bm;
        }
};

int GiangVien::cnt = 0;
void GiangVien::nhap()
{
    cnt++;
    string s = to_string(cnt);
    if(s.size() < 2)s = "0" + s;
    ma = "GV" + s;
    getline(cin,name);
    getline(cin ,bm);
}
void GiangVien::xuat()
{
    cout << ma << " " << name << " " << chuan(bm) << endl;
}

void solve(string &s)
{
    for(char &x:s)x = tolower(x);
}

 int main(){
    int n;cin >> n;
    cin.ignore();
    GiangVien list[n];
    for(int i=0;i<n;i++)
        list[i].nhap();
    int q;cin >>q;
    cin.ignore();
    while(q--)
    {
        string s;
        getline(cin ,s);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":\n";
        solve(s);
        for(int i=0;i<n;i++)
        {
            string temp = list[i].getTen();
            solve(temp);
            if(temp.find(s) != -1)list[i].xuat();
            else continue;
        }
    }
}
/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
1
Cong nghe phan mem
*/
