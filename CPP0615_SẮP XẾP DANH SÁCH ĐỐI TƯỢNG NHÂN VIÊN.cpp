#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int cnt=0;
class NhanVien{
    private:
        int id;
        string name;
        string sex;
        string bth;
        string adr;
        string code;
        string date;
    public:
        NhanVien(){
            id=0;
            name = "";
            sex = "";
            bth = "";
            adr = "";
            code = "";
            date = "";
        }
        friend istream& operator >> (istream &in,NhanVien &a);
        friend ostream& operator << (ostream &out,NhanVien a);
        friend bool operator < (NhanVien a,NhanVien b)
        {
            string tmp1,tmp2;
            for(int i=6;i<=9;i++)tmp1 += a.bth[i];
            for(int i=0;i<=1;i++)tmp1 += a.bth[i];
            for(int i=3;i<=4;i++)tmp1 += a.bth[i];
            for(int i=6;i<=9;i++)tmp2 += b.bth[i];
            for(int i=0;i<=1;i++)tmp2 += b.bth[i];
            for(int i=3;i<=4;i++)tmp2 += b.bth[i];
            return tmp1 < tmp2;
        }
};

istream& operator >> (istream &in,NhanVien &a)
{   
    cin.ignore();
    cnt++;
    a.id = cnt;
    getline(in,a.name);
    getline(in,a.sex);
    getline(in,a.bth);
    getline(in,a.adr);
    getline(in,a.code);
    in >> a.date;
    return in;
}

ostream& operator << (ostream &out,NhanVien a)
{
    printf("%05d ",a.id);
    out << a.name << " " << a.sex << " " << a.bth << " " << a.adr << " " << a.code << " " << a.date << endl;
    return out;
}

void sapxep(NhanVien a[],int n)
{
    sort(a,a + n);
}

 int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
/*
3
Nguyen Van A
Nam
10/22/1982
Mo Lao-Ha Dong-Ha Noi
8333012345
31/12/2013
Ly Thi B
Nu
10/15/1988
Mo Lao-Ha Dong-Ha Noi
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
Mo Lao-Ha Dong-Ha Noi
8333012347
22/08/2011
*/
