#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define PI 3.14
// Bài 571: Xét vị trí tương đối giữa 2 đường tròn( không cắt nhau, tiếp xúc, cắt nhau)
// Bài 572: Kiểm tra 1 tọa độ điểm có nằm trong đường tròn hay không
// Bài 573: Cho 2 đường tròn. Tính diện tích phần mặt phẳng bị phủ bởi 2 đường tròn đó
class Diem
{
    private:
        float x;
        float y;
    public:
        Diem();
        Diem(float x, float y);
        float getx(){return x;}
        float gety(){return y;}
};
Diem::Diem()
{
    this->x = 0;
    this->y = 0;
}
Diem::Diem(float x, float y)
{
    this->x = x;
    this->y = y;
}
class DuongTron
{
    private:
        float bankinh;
        float x;
        float y;
    public:
        DuongTron();
        DuongTron(float x, float y, float bankinh);
        void nhap();
        void xuat();
        float chuvi();
        float dientich();
        float getbankinh(){return bankinh;}
        bool kiemtratoado(Diem a);
        int kiemtra2duongtron(DuongTron a, DuongTron b);        
        float dientichphu2dt(DuongTron a, DuongTron b);
};
DuongTron::DuongTron()
{
    this->x = 0;
    this->y = 0;
    this->bankinh = 0;
}
DuongTron::DuongTron(float x, float y, float bankinh)
{
    this->x = x;
    this->y = y;
    this->bankinh = bankinh;
}
void DuongTron::nhap()
{
    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;
    cout<<"Ban kinh : ";
    cin>>bankinh;
}
void DuongTron::xuat()
{
    cout<<"(("<<x<<","<<y<<"),"<<bankinh<<")\n";
}
float DuongTron::chuvi()
{
    return bankinh*2*PI;
}
float DuongTron::dientich()
{
    return pow(bankinh,2)*PI;
}
bool DuongTron::kiemtratoado(Diem a)
{
    bool test = false;
    float d;
    d = sqrt(pow(a.getx() - this->x,2) + pow(a.gety() - this->y,2));
    if (d > getbankinh())
    {
        test = false;
    }
    else test = true;
    return test;
}
int DuongTron::kiemtra2duongtron(DuongTron a, DuongTron b)
{
    float tong = sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2));
    if(tong < a.bankinh + b.bankinh) return -1;
    else if(tong == a.bankinh + b.bankinh) return 0;
    else return 1;
}
float DuongTron::dientichphu2dt(DuongTron a, DuongTron b)
{
    float dientich;
    if(a.kiemtra2duongtron(a,b) == -1)
    {
        dientich = 0;
    }
    else if(a.kiemtra2duongtron(a,b) == 0)
    {
        dientich = a.dientich() + b.dientich();
    }
    
    return dientich;
}
int main()
{
    DuongTron a,b,c;
    Diem z;
    z = Diem(3,3);
    a = DuongTron(0,3,1);
    b = DuongTron(3,7,4);
    a.xuat();
    cout<<a.dientich()<<"\n";
    cout<<a.chuvi()<<"\n";
    if(a.kiemtratoado(z) == false) cout<<"Khong thuoc duong tron\n";
    else cout<<"Thuoc duong tron\n";
    if(a.kiemtra2duongtron(a,b) == -1) cout<<"2 duong tron cat nhau\n";
    else if(a.kiemtra2duongtron(a,b) == 0) cout<<"2 duong tron tiep xuc nhau\n";
    else cout<<"2 duong tron khong cat nhau\n";
    cout<<a.dientichphu2dt(a,b)<<"\n";
    return 0;
}