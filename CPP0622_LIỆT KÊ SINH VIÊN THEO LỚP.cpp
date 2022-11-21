#include<bits/stdc++.h>
using namespace std; 
 
#define PI 3.141592653589793238

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
            if(a.clas != b.clas)
                return a.clas < b.clas;
            else return a.MSV < b.MSV;
        }
        string getClas()
        {
            return clas;
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
    cout << a.MSV << " " << a.name << " " << a.clas << " " << a.email << endl;
    return out;
}

void sapxep(SinhVien a[],int n)
{
    sort(a,a + n);
}
 int main(){
    SinhVien ds[1000];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++) cin >> ds[i];
    int q;cin >> q;
    while(q--)
    {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for(i=0;i<N;i++) 
        {
            if(ds[i].getClas() == s)
                cout << ds[i];
        }
    }
    return 0;
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
D15CQKT02-B
*/
