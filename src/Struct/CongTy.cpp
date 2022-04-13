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
        float getluong(){return luong;}
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
    cout<<setw(15)<<manv<<setw(20)<<hotennv<<setw(10)<<luong<<"\n";
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
        void xoanv(int vitri);
        int soluong(){return danhsach.size();}
        void xuat()
        {
            for(int i = 0; i < soluong(); i++)
            {
                danhsach[i].xuat();
            }
        }
        void sapxeptheoluong();
};
void DanhSach::xoanv(int vitri)
{
    danhsach.erase(danhsach.begin() + vitri);
}
void DanhSach::sapxeptheoluong()
{
    NhanVien temp;
    for(int i = 0; i < soluong()-1; i++)
    {
        for(int j = i+1; j < soluong(); j++)
        {
            if(danhsach[i].getluong() > danhsach[j].getluong())
            {
                temp = danhsach[i];
                danhsach[i] = danhsach[j];
                danhsach[j] = temp;
            }
        }
    }
}
int main()
{
    PhongBan phongban,phongban2,phongban3,phongban4;
    ViTri vitri,vitri2,vitri3,vitri4;
    NhanVien nhanvien,nhanvien2,nhanvien3,nhanvien4;
    DanhSach list;
    phongban = PhongBan("001","002");
    vitri = ViTri("003","004",50000);    
    phongban2 = PhongBan("10","11");
    vitri2 = ViTri("12","13",100000);
    nhanvien= NhanVien("A1","A2",40000,phongban,vitri);
    nhanvien2 = NhanVien("14","15",80,phongban2,vitri2);
    phongban3 = PhongBan("20","21");
    vitri3 = ViTri("22","23",50000);    
    phongban4 = PhongBan("30","31");
    vitri4 = ViTri("32","33",100000);
    nhanvien3= NhanVien("A1","A2",50,phongban,vitri);
    nhanvien4 = NhanVien("14","15",90,phongban2,vitri2);
    list.themnhanvien(nhanvien);
    list.themnhanvien(nhanvien2);
    list.themnhanvien(nhanvien3);
    list.themnhanvien(nhanvien4);
    list.sapxeptheoluong();
    list.xuat();    
    return 0;
}