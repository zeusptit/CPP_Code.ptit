#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int cnt = 0;
class SinhVien{
    private:
        string name;
        string MSV;
        string clas;
        string email;
    public:
        SinhVien(){
            name = "";
            MSV = "";
            clas = "";
            email = "";
        }
        friend istream& operator >> (istream &in,SinhVien &a);
        friend ostream& operator << (ostream &out,SinhVien a);
        friend bool operator < (SinhVien a,SinhVien b)
        {
            if(a.clas != b.clas)
                return a.clas < b.clas;
            else return a.MSV < b.MSV;
        }
        string getYear()
        {
            return clas;
        }
};

istream& operator >> (istream &in,SinhVien &a)
{   
    in >> a.MSV;
    in.ignore();
    getline(in,a.name);
    in >> a.clas >> a.email;
    return in;
}

ostream& operator << (ostream &out,SinhVien a)
{
    out << a.MSV << " " << a.name << " " << a.clas << " " << a.email << endl;
    return out;
}

void sapxep(SinhVien a[],int n)
{
    sort(a,a + n);
}
 int main(){
    int n;cin >> n;
    map<int,vector<SinhVien>>mp;
    for(int i=0;i<n;i++)
    {
        SinhVien temp;cin >> temp;
        mp[stoi(temp.getYear().substr(1,2))].push_back(temp);
    }
    int q;cin >> q;
    while(q--)
    {
        int nam;cin >> nam;
        cout<<"DANH SACH SINH VIEN KHOA "<<nam<<":\n";
         for(SinhVien x : mp[nam % 100])
           {
                cout << x;
           }
    }
}
/*
4
B16DCCN011
Nguyen Trong Duc Anh
D16CNPM1
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
1
2015
*/
