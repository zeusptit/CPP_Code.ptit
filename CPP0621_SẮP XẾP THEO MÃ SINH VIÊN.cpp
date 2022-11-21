#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int cnt=0;
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
            return a.MSV < b.MSV;
        }
};

istream& operator >> (istream &in,SinhVien &a)
{   
    getline(in,a.MSV);
    getline(in,a.name);
    getline(in,a.clas);
    getline(in,a.email);
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
    SinhVien ds[1000],x;
    int N=0;
    while(cin >> x)
    {
        ds[N++] = x;
    }
    sapxep(ds,N);
    for(int i=0;i<N;i++) cout << ds[i];
    return 0;
}
/*
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
D15CQKT03-B
sv4@stu.ptit.edu.vn
*/
