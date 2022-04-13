// Nhanvien: mã, họ tên, lương, phòng ban, vị trí
// PhongBan: mã, tên
// ViTri: mã, tên, trợ cấp
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
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
        string getmaphongban(){return ma;}
        string gettenphongban(){return ten;}
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
        string getmavitri(){return ma;}
        string gettenvitri(){return ten;}
        int gettrocap(){return trocap;}
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
        string getmanv(){return manv;}
        string gethotennv(){return hotennv;}
        PhongBan getphongban(){return phongban;}
        ViTri getvitri(){return vitri;}
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
        void xoanv(int vitribatdau, int vitriketthuc);
        int soluong(){return danhsach.size();}
        void xuat();     
        void sapxeptheoluong();
        // NhanVien getnhanvien(){return danhsach[];}
        DanhSach timnhanvientheomaphongban(string maphongban);
        DanhSach timnhanvientheomavitri(string mavitri);
        float tinhtongluongtheomaphongban(string maphongban);        
        void intop3luongcaonhat();
        void xoanvtheomaphongban(string maphongban);
};
void DanhSach::xuat()
{
    cout<<setw(15)<<"Ma nhan vien"<<setw(20)<<"Ho Ten"<<setw(9)<<"Luong"<<setw(16)<<"Ma phong ban"<<setw(16)<<"Ten phong ban"<<setw(12)<<"Ma vi tri"<<setw(15)<<"Ten vi tri"<<setw(10)<<"Tro cap"<<"\n";
    for(int i = 0; i < soluong(); i++)
    {
    cout<<setw(15)<<danhsach[i].getmanv()<<setw(20)<<danhsach[i].gethotennv()<<setw(9)<<danhsach[i].getluong()<<setw(16)<<danhsach[i].getphongban().getmaphongban()<<setw(16)<<danhsach[i].getphongban().gettenphongban()<<setw(12)<<danhsach[i].getvitri().getmavitri()<<setw(15)<<danhsach[i].getvitri().gettenvitri()<<setw(10)<<danhsach[i].getvitri().gettrocap()<<"\n";
    }
}
void DanhSach::xoanv(int vitribatdau, int vitriketthuc)
{
    danhsach.erase(danhsach.begin() + vitribatdau, danhsach.begin() + vitriketthuc);
}
void DanhSach::sapxeptheoluong()
{
    // sort(danhsach.begin(),danhsach.end(),greater <float>());
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
DanhSach DanhSach::timnhanvientheomaphongban(string maphongban)
{
    DanhSach a;
    for(int i = 0; i < soluong(); i++)
    {
        if (danhsach[i].getphongban().getmaphongban() == maphongban)
        {
            a.themnhanvien(danhsach[i]);
        }
    }
    return a;
}
float DanhSach::tinhtongluongtheomaphongban(string maphongban)
{
    float tong = 0;
    for(int i = 0; i < soluong(); i++)
    {
        if(danhsach[i].getphongban().getmaphongban() == maphongban)
        {
            tong+=danhsach[i].getluong();
        }
    }
    return tong;
}
DanhSach DanhSach::timnhanvientheomavitri(string mavitri)
{
    DanhSach a;
    for(int i = 0; i < soluong(); i++)
    {
        if(danhsach[i].getvitri().getmavitri() == mavitri)
        {
            a.themnhanvien(danhsach[i]);
        }
    }
    return a;
}
void DanhSach::intop3luongcaonhat()
{   
    cout<<setw(15)<<"Ma nhan vien"<<setw(20)<<"Ho Ten"<<setw(9)<<"Luong"<<setw(16)<<"Ma phong ban"<<setw(16)<<"Ten phong ban"<<setw(12)<<"Ma vi tri"<<setw(15)<<"Ten vi tri"<<setw(10)<<"Tro cap"<<"\n";
    for(int i = soluong()-1; i >= soluong()-3; i--)
    {
    cout<<setw(15)<<danhsach[i].getmanv()<<setw(20)<<danhsach[i].gethotennv()<<setw(9)<<danhsach[i].getluong()<<setw(16)<<danhsach[i].getphongban().getmaphongban()<<setw(16)<<danhsach[i].getphongban().gettenphongban()<<setw(12)<<danhsach[i].getvitri().getmavitri()<<setw(15)<<danhsach[i].getvitri().gettenvitri()<<setw(10)<<danhsach[i].getvitri().gettrocap()<<"\n";
    }
}
void DanhSach::xoanvtheomaphongban(string maphongban)
{
    for(int i = 0; i < soluong(); i++)
    {
        if(danhsach[i].getphongban().getmaphongban() == maphongban)
        {
            danhsach.erase(danhsach.begin() + i);
        }
    }
}
int main()
{
    PhongBan phongban,phongban2,phongban3,phongban4;
    ViTri vitri,vitri2,vitri3,vitri4;
    NhanVien nhanvien,nhanvien2,nhanvien3,nhanvien4;
    DanhSach list,a;
    phongban = PhongBan("01","02");
    vitri = ViTri("03","04",50000);    
    phongban2 = PhongBan("10","11");
    vitri2 = ViTri("12","13",100000);
    phongban3 = PhongBan("20","21");
    vitri3 = ViTri("22","23",50000);    
    phongban4 = PhongBan("30","31");
    vitri4 = ViTri("32","33",100000);    
    nhanvien= NhanVien("A1","A2",40000,phongban,vitri);
    nhanvien2 = NhanVien("B1","B2",80,phongban2,vitri2);
    nhanvien3= NhanVien("C1","C2",50,phongban3,vitri3);
    nhanvien4 = NhanVien("D1","D2",90,phongban4,vitri4);
    list.themnhanvien(nhanvien);
    list.themnhanvien(nhanvien2);
    list.themnhanvien(nhanvien3);
    list.themnhanvien(nhanvien4);
    list.sapxeptheoluong();
    list.xuat();    
    list.intop3luongcaonhat();
    list.xoanvtheomaphongban("30");
    list.xuat();
    // a = list.timnhanvientheomaphongban("01").timnhanvientheomavitri("03");
    // a.xuat();
    // cout<<"Tong luong theo ma phong ban: "<<list.tinhtongluongtheomaphongban("10")<<"\n";
    return 0;
}