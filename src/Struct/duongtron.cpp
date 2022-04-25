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
int main()
{
    DuongTron a,b,c;
    a = DuongTron(3,4,7);
    a.xuat();
    cout<<a.dientich()<<"\n";
    cout<<a.chuvi()<<"\n";
    cout<<PI;
    return 0;
}