#include<bits/stdc++.h>
using namespace std; 
 
#define PI 3.141592653589793238

int cnt=0;
class SinhVien{
    private:
        int id;
        string no;
        string name;
        string clas;
        string dob;
        float gpa;
    public:
        SinhVien(){
            no="B20DCCN";
            name="";
            clas="";
            dob="";
            gpa=0;
            id=0;
        }
        friend istream& operator >> (istream &in,SinhVien &a);
        friend ostream& operator << (ostream &out,SinhVien a);
};

istream& operator >> (istream &in,SinhVien &a)
{   
    cin.ignore();
    getline(in,a.name);
    in >> a.clas >> a.dob;
    in >> a.gpa;
    if (a.dob[1] == '/') a.dob = "0" + a.dob;
    if (a.dob[4] == '/') a.dob.insert(3, "0");
    return in;
}

ostream& operator << (ostream &out,SinhVien a)
{
    cnt++;
    a.id = cnt;
    cout << "B20DCCN";
    printf("%03d",a.id);
    out << " " << a.name << " " << a.clas << " " << a.dob << " ";
    printf("%.2f",a.gpa);
    cout << endl;
    return out;
}
 int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
/*
3
Nguyen Van An
D20CQCN01-B
2/12/2002
3.19
Bui Duy Binh
D20CQCN02-B
2/1/2002
3.10
Tran Phu Cuong
D20CQCN02-B
14/5/2003
3.00
*/
