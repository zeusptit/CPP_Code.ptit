#include <iostream>

using namespace std;
class SinhVien{
	private:
        string no;
        string name;
        string clas;
        string dob;
        float gpa;
	public:
		SinhVien(){
			no = "B20DCCN001";
		}
		friend istream& operator >> (istream &in,SinhVien &a);
		friend ostream& operator << (ostream &out,SinhVien a);
};

istream& operator >> (istream &in,SinhVien &a)
{
	getline(in,a.name);
	in >> a.clas >> a.dob >> a.gpa;
	if (a.dob[1] == '/') a.dob = "0" + a.dob;
    	if (a.dob[4] == '/') a.dob.insert(3, "0");
	return in;
}

ostream& operator << (ostream &out,SinhVien a)
{
	out << a.no << " " << a.name << " " << a.clas << " " << a.dob << " ";
	printf("%.2f",a.gpa);
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
