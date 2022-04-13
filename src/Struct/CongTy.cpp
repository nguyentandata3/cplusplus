// Nhanvien: mã, họ tên, lương, phòng ban, vị trí
// PhongBan: mã, tên
// ViTri: mã, tên, trợ cấp
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
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
class NhanVien
{
    private:
        string manv;
        string hotennv;
        float luong;
        PhongBan phongban;
        ViTri vitri;
    public:
        NhanVien();
        NhanVien(string manv, string hotennv, float luong, PhongBan phongban, ViTri vitri);
        void nhap();
        void xuat();
};
NhanVien::NhanVien()
{
    this->manv = "error";
    this->hotennv = "error";
    this->luong = 0;
}
NhanVien::NhanVien(string manv, string hotennv, float luong, PhongBan phongban, ViTri vitri)
{
    this->manv = manv;
    this->hotennv = hotennv;
    this->luong = luong;
    this->phongban = phongban;
    this->vitri = vitri;
}
void NhanVien::nhap()
{
    cout<<"Ma nhan vien: ";
    cin>>manv;
    cout<<"Ho ten nhan vien: ";
    cin>>hotennv;
    phongban.nhap();
    vitri.nhap();
}
void NhanVien::xuat()
{
    cout<<setw(15)<<"Ma nhan vien"<<setw(20)<<"Ho ten nhan vien"<<setw(10)<<"Luong"<<"\n";
    cout<<setw(15)<<manv<<setw(20)<<hotennv<<setw(10)<<luong;
    phongban.xuat();
    vitri.xuat();
}
class DanhSach
{
    private:
        vector<NhanVien> danhsach;
    public:
        void themnhanvien(NhanVien nhanvien)
        {
            danhsach.push_back(nhanvien);
        }
        int soluong(){return danhsach.size();}
        void xuat()
        {
            for(int i = 0; i < soluong(); i++)
            {
                danhsach[i].xuat();
            }
        }

};
int main()
{
    PhongBan phongban;
    ViTri vitri;
    NhanVien nhanvien;
    DanhSach list;
    phongban = PhongBan("001","002");
    vitri = ViTri("003","004",50000);
    nhanvien= NhanVien("A1","A2",40000,phongban,vitri);
    list.themnhanvien(nhanvien);
    list.xuat();
    return 0;
}