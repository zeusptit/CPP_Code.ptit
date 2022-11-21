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
        friend bool operator < (SinhVien a,SinhVien b)
        {
            return a.gpa < b.gpa;
        }
};

istream& operator >> (istream &in,SinhVien &a)
{   
    scanf("\n");
    cnt++;
    a.id = cnt;
    getline(in,a.name);
    in >> a.clas >> a.dob;
    in >> a.gpa;
    if (a.dob[1] == '/') a.dob = "0" + a.dob;
    if (a.dob[4] == '/') a.dob.insert(3, "0");
    stringstream ss(a.name);
    string temp,final;
    while(ss >> temp)
    {
        final += toupper(temp[0]);
        for(int i=1;i<temp.size();i++)
            final += tolower(temp[i]);
        final += " ";
    }
    final.erase(final.length() - 1);
    a.name = final;
    return in;
}

ostream& operator << (ostream &out,SinhVien a)
{
    
    out << "B20DCCN";
    printf("%03d",a.id);
    out << " " << a.name << " " << a.clas << " " << a.dob << " ";
    printf("%.2f",a.gpa);
    out << endl;
    return out;
}

void sapxep(SinhVien a[],int n)
{
    sort(a,a + n);
    reverse(a,a + n);
}

 int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
/*
2
ngUYen Van NaM
D20DCCN01-B
2/12/2002
2.17
Nguyen QuanG hAi
D20DCCN02-B
1/9/2002
3.0
*/
