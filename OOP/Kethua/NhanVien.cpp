#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class NhanVien
{
    private:
        string ten;
        int tuoi;
        string gioitinh;
    public:        
        NhanVien(){};
        NhanVien(string ten, int tuoi, string gioitinh);
        void setten(string ten);
        string getten();
        void settuoi(int tuoi);
        int gettuoi();
        void setgioitinh(string gioitinh);
        string getgioitinh();
        virtual float luong() = 0;
};
class NhanVienHopDong: public NhanVien
{
    private:
        float hesoluong;
        float mucluong;
    public:
        NhanVienHopDong(){};
        NhanVienHopDong(string ten, int tuoi, string gioitinh, float hesoluong, float mucluong):NhanVien(ten, tuoi, gioitinh){
            this->hesoluong = hesoluong;
            this->mucluong = mucluong;
        }
        float luong();
        void xuat();
};
class NhanVienThoiVu: public NhanVien
{
    private:
        float sanpham;
        float hoahong;
    public:
        NhanVienThoiVu(){};
        NhanVienThoiVu(string ten, int tuoi, string gioitinh, float sanpham, float hoahong):NhanVien(ten, tuoi, gioitinh)
        {
            this->sanpham = sanpham;
            this->hoahong = hoahong;
        }
        float luong();
        void xuat();
};
int main(){
    NhanVienHopDong a("Minh",13,"Nu",3,4);
    NhanVienThoiVu c("A",15,"Nam",20,12);
    a.xuat();
    c.xuat();
    return 0;
}
NhanVien::NhanVien(string ten, int tuoi, string gioitinh)
{
    this->ten = ten;
    this->tuoi = tuoi;
    this->gioitinh = gioitinh;
}
void NhanVien::setten(string ten)
{
    this->ten = ten;
}
string NhanVien::getten()
{
    return ten;
}
void NhanVien::settuoi(int tuoi)
{
    this->tuoi = tuoi;
}
int NhanVien::gettuoi()
{
    return tuoi;
}
void NhanVien::setgioitinh(string gioitinh)
{
    this->gioitinh = gioitinh;
}
string NhanVien::getgioitinh()
{
    return gioitinh;
}
float NhanVienHopDong::luong()
{
    return hesoluong*mucluong;
}
void NhanVienHopDong::xuat()
{
    cout<<"Nhan vien hop dong: \n";
    cout<<setw(10)<<"Ten"<<setw(10)<<"Tuoi"<<setw(10)<<"Gioi tinh"<<setw(10)<<"Luong"<<endl;
    cout<<setw(10)<<getten()<<setw(10)<<gettuoi()<<setw(10)<<getgioitinh()<<setw(10)<<luong()<<endl;
}
float NhanVienThoiVu::luong()
{
    return sanpham*hoahong;
}
void NhanVienThoiVu::xuat()
{
    cout<<"Nhan vien thoi vu:\n";
    cout<<setw(10)<<"Ten"<<setw(10)<<"Tuoi"<<setw(10)<<"Gioi tinh"<<setw(10)<<"Luong"<<"\n";
    cout<<setw(10)<<getten()<<setw(10)<<gettuoi()<<setw(10)<<getgioitinh()<<setw(10)<<luong();
}