#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
class thanhvien
{
    private:
        int tuoi;
        string ten;
        string vitri;
        string nghenghiep;
    public:
        thanhvien(); // chua co du lieu
        thanhvien(int tuoi, string ten, string vitri, string nghenghiep);
        void nhap();
        void xuat();
};
class family
{
    private:
        vector<thanhvien> family;
    public:
        void nhapfamily(int soluong);
        void xuatfamily(int soluong);
};
int main()
{
    family family;
    int n;
    cout<<"Gia dinh ban co bao nhieu nguoi: ";
    cin>>n;
    family.nhapfamily(n);
    family.xuatfamily(n);
    return 0;
}
thanhvien::thanhvien()
{
    this->tuoi = 0;
    this->ten = "error";
    this->vitri = "error";
    this->nghenghiep = "error";
}
thanhvien::thanhvien(int tuoi, string ten, string vitri, string nghenghiep)
{
    this->tuoi = tuoi;
    this->ten = ten;
    this->vitri = vitri;
    this->nghenghiep = nghenghiep;
}
void thanhvien::nhap()
{
    cout<<"Tuoi: ";
    cin>>tuoi;
    cout<<"Ten: ";
    cin>>ten;
    cout<<"Vi tri: ";
    cin>>vitri;
    cout<<"Nghe nghiep: ";
    cin>>nghenghiep;
}
void thanhvien::xuat()
{
    cout<<setw(5)<<right<<tuoi;
    cout<<setw(15)<<right<<ten;
    cout<<setw(15)<<right<<vitri;
    cout<<setw(15)<<right<<nghenghiep<<endl;
}
void family::nhapfamily(int soluong)
{
    thanhvien family;
    for(int i = 0; i < soluong; i++)
    {
        cout<<"Thanh vien thu ["<<i<<"]: "<<endl;
        family.nhap();
        this->family.push_back(family);
        cout<<endl;
    }
}
void family::xuatfamily(int soluong)
{
    cout<<"Thong tin thanh vien: "<<endl;
    for(int i = 0; i < soluong; i++)
    {
        cout<<setw(5)<<right<<"Tuoi";
        cout<<setw(15)<<right<<"Ten";
        cout<<setw(15)<<right<<"Vi tri";
        cout<<setw(15)<<right<<"Nghe Nghiep"<<endl;
        this->family[i].xuat();
    }
}
