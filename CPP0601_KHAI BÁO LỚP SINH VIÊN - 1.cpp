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
      void nhap()
      {
          getline(cin, name);
          getline(cin, clas);
          getline(cin, dob);
          cin >> gpa;
          if (dob[1] == '/') dob = "0" + dob;
          if (dob[4] == '/') dob.insert(3, "0");
          no = "B20DCCN001";
      }
      void xuat()
      {
          cout << no << " " << name << " " << clas << " " << dob << " ";
          printf("%.2f", gpa);
      }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
