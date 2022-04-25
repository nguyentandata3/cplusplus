// Bài 540: khai báo dữ liệu điểm OXY
// Bài 541: Nhập tọa độ điểm trong mặt phẳng
// Bài 542: Xuất tọa độ điểm trong mặt phẳng
// Bài 543: Tính khoảng cách giữa 2 điểm
// Bài 544: Tính khoảng cách 2 điểm theo phương Ox
// Bài 545: Tính khoảng cách 2 điểm theo phương Oy
// Bài 546: Tìm tọa độ điểm đối xứng qua gốc tọa độ
// Bài 547: Tìm điểm đối xứng qua trục hoành
// Bài 548: Tìm điểm đối xứng qua trục tung
// Bài 549: Tìm điểm đối xứng qua đường phân giác thứ 1 (y=x)
// Bài 550: Tìm điểm đối xứng qua đường phân giác thứ 2 (y=-x)
// Bài 551: Kiểm tra điểm thuộc phần tư thứ 1 ko?
// Bài 552: Kiểm tra điểm thuộc phần tư thứ 2 ko?
// Bài 553: Kiểm tra điểm thuộc phần tư thứ 3 ko?
// Bài 554: Kiểm tra điểm thuộc phần tư thứ 4 ko?
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Diem
{
    private:
        float x;
        float y;
    public:
        Diem();
        Diem(float x, float y);
        void nhap();
        void xuat();
        float doixungx(){return -this->x;}
        float doidungy(){return -this->y;}
        float khoangcach2diem(Diem a, Diem b);
        float khoangcachtheoox(Diem a, Diem b);
        float khoangcachtheooy(Diem a, Diem b);
        Diem toadodoixung();
        Diem doixungpgt1();
        Diem doixungpgt2();
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
void Diem::nhap()
{
    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;
}
void Diem::xuat()
{
    cout<<"("<<x<<";"<<y<<")\n";
}
Diem Diem::toadodoixung()
{
    Diem diem;
    diem.x = -this->x;
    diem.y = -this->y;
    return diem;
}
Diem Diem::doixungpgt1()
{
    Diem diem;
    diem.x = this->x;
    diem.y = this->x;
    return diem;
}
Diem Diem::doixungpgt2()
{
    Diem diem;
    diem.x = this->x;
    diem.y = -this->x;
    return diem;
}
float Diem::khoangcach2diem(Diem a, Diem b)
{
    return sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
}
float Diem::khoangcachtheoox(Diem a, Diem b)
{
    return abs(a.x) + abs(b.x);
}
float Diem::khoangcachtheooy(Diem a, Diem b)
{
    return abs(a.y) + abs(b.y);
}
int main()
{
    Diem a,b;
    float c;
    a = Diem(3,5);
    b = a.toadodoixung();
    b.xuat();
    // b = a.doixungpgt1();
    // b.xuat();
    b = a.doixungpgt2();
    b.xuat();
    c = a.doixungx();
    cout<<c<<endl;
    c = b.khoangcachtheoox(a,b);
    cout<<c<<endl;
    a.xuat();
    b.xuat();
    c = b.khoangcach2diem(a,b);
    cout<<c<<"\n";
    return 0;
}