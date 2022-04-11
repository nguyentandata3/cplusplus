// Nhanvien: mã, họ tên, lương, phòng ban, vị trí
// PhongBan: mã, tên
// ViTri: mã, tên, trợ cấp
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class PhongBan
{
    private:
        string ma;
        string ten;
    public:
        PhongBan();
        PhongBan(string ma, string ten);
        void nhap();
        void xuat();
};
PhongBan::PhongBan()
{
    this->ma = "error";
    this->ten = "error";
}
PhongBan::PhongBan(string ma, string ten)
{
    this->ma = ma;
    this->ten = ten;
}
void PhongBan::nhap()
{
    cout<<"Nhap ma phong ban: ";
    cin>>ma;
    cout<<"Nhap ten phong ban: ";
    cin>>ten;
}
void PhongBan::xuat()
{
    cout<<setw(15)<<"Ma phong ban"<<setw(18)<<"Ten phong ban"<<"\n";
    cout<<setw(15)<<ma<<setw(18)<<ten<<"\n";
}
class ViTri
{
    private:
        string ma,ten;
        int trocap;
    public:
        ViTri();
        ViTri(string ma, string ten, int trocap);
        void nhap();
        void xuat();
};
ViTri::ViTri()
{
    this->ma = "error";
    this->ten = "error";
    this->trocap = 0;
}
ViTri::ViTri(string ma, string ten, int trocap)
{
    this->ma = ma;
    this->ten = ten;
    this->trocap = trocap;
}
void ViTri::nhap()
{
    cout<<"Ma vi tri: ";
    cin>>ma;
    cout<<"Ten vi tri: ";
    cin>>ten;
    cout<<"Tro cap: ";
    cin>>trocap;
}
void ViTri::xuat()
{
    cout<<setw(15)<<"Ma vi tri"<<setw(18)<<"Ten vi tri"<<setw(18)<<"Tro cap"<<"\n";
    cout<<setw(15)<<ma<<setw(18)<<ten<<setw(18)<<trocap<<"\n";
}
int main()
{
    PhongBan phongban;
    ViTri vitri;
    phongban = PhongBan("001","002");
    vitri = ViTri("003","004",50000);
    phongban.xuat();
    vitri.xuat();
    return 0;
}