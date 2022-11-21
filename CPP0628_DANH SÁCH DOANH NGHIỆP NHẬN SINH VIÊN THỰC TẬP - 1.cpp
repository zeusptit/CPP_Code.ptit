#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


class DoanhNghiep{
    private:
        string id;
        string name;
        int num;
    public:
        void nhap();
        void xuat();
        int getNum()
        {
            return num;
        }
        string getId()
        {
            return id;
        }
};

void DoanhNghiep::nhap()
{
    cin >> id;
    cin.ignore();
    getline(cin,name);
    cin >> num;
}
void DoanhNghiep::xuat()
{
    cout << id << " " << name << " " << num << endl;
}

bool cmp(DoanhNghiep a,DoanhNghiep b)
{
    if(a.getNum() != b.getNum())
        return a.getNum() > b.getNum();
    return a.getId() < b.getId();
}

 int main(){
    int n;cin >> n;
    cin.ignore();
    DoanhNghiep list[n];
    for(int i=0;i<n;i++)
        list[i].nhap();
    sort(list,list + n,cmp);
    for(int i=0;i<n;i++)
        list[i].xuat();
}
/*
4
VIETTEL
TAP DOAN VIEN THONG QUAN DOI VIETTEL
40
FSOFT
CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
300
VNPT
TAP DOAN BUU CHINH VIEN THONG VIET NAM
200
SUN
SUN*
50
*/
