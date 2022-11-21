#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

class SinhVien{
    private:
        string no;
        string name;
        string clas;
        string dob;
        float gpa;
    public:
        SinhVien(){
            no="B20DCCN001";
            name="";
            clas="";
            dob="";
            gpa=0;
        }
        friend istream& operator >> (istream &in,SinhVien &a);
        friend ostream& operator << (ostream &out,SinhVien a);
};

istream& operator >> (istream &in,SinhVien &a)
{
    getline(cin,a.name);
    in >> a.clas >> a.dob >> a.gpa;
    if (a.dob[1] == '/') a.dob = "0" + a.dob;
    if (a.dob[4] == '/') a.dob.insert(3, "0");
    string res = "";
    stringstream ss(a.name);
    string tmp;
    while(ss >> tmp)
    {
        res += toupper(tmp[0]);
        for(int i=1;i<tmp.length();i++)
            res += tolower(tmp[i]);
        res += " ";
    }
    res.erase(res.length() - 1);
    a.name = res;
    return in;
}

ostream& operator << (ostream &out,SinhVien a)
{
    out << a.no << " " << a.name << " " << a.clas << " " << a.dob << " ";
    out << fixed << setprecision(2) << a.gpa;
    return out;
}


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
