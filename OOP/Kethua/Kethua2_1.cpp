#include <iostream>
#define PI 3.14
using namespace std;
class Hinh{
    public:    
        Hinh(){};
        virtual float tinhChuVi() = 0;
};
class HinhChuNhat: public Hinh{
        int chieudai, chieurong;
    public:
        HinhChuNhat();
        HinhChuNhat(int chieudai, int chieurong);
        float tinhChuVi();
        float tinhDienTich();
};
class HinhVuong: public Hinh{
        int chieudai;
    public:
        HinhVuong();
        HinhVuong(int chieudai);
        float tinhChuVi();
        float tinhDienTich();
};
class HinhTron: public Hinh{
        int bankinh;
    public:
        HinhTron();
        HinhTron(int bankinh);
        float tinhChuVi();
        float tinhDienTich();
};
int main()
{
    HinhChuNhat a(2,5);
    HinhTron b(4);
    cout<<a.tinhChuVi();
    cout<<endl<<b.tinhChuVi();
    return 0;
}
HinhChuNhat::HinhChuNhat()
{
    this->chieudai = 0;
    this->chieurong = 0;
}
HinhChuNhat::HinhChuNhat(int chieudai, int chieurong)
{
    this->chieudai = chieudai;
    this->chieurong = chieurong;
}
HinhVuong::HinhVuong()
{ 
    this->chieudai = 0;
}
HinhVuong::HinhVuong(int chieudai)
{
    this->chieudai = chieudai;
}
HinhTron::HinhTron()
{
    this->bankinh = 0;
}
HinhTron::HinhTron(int bankinh)
{
    this->bankinh = bankinh;
}
float HinhChuNhat::tinhChuVi(){
    return (chieudai+chieurong)*2;
}
float HinhChuNhat::tinhDienTich(){
    return chieudai*chieurong;
}
float HinhVuong::tinhChuVi(){
    return chieudai*4;
}
float HinhVuong::tinhDienTich(){
    return chieudai*chieudai;
}
float HinhTron::tinhChuVi(){
    return bankinh*PI;
}
float HinhTron::tinhDienTich(){
    return bankinh*bankinh*PI;
}