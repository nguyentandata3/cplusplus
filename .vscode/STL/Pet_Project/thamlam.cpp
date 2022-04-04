#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class DoVat
{
    public:
        string ten;
        float giatri, trongluong;
        int soluong;
        // khởi tạo 3 dối số
        DoVat();
        DoVat(float giatri, float trongluong, string ten);
        float tinhDonGia(){return giatri/trongluong;}
};
DoVat::DoVat()
{
    this->ten = "error";
    this->giatri = 0;
    this->trongluong = 0;
}
DoVat::DoVat(float giatri, float trongluong, string ten)
{
    this->ten = ten;
    this->giatri = giatri;
    this->trongluong = trongluong;
}
int main()
{
    DoVat a[10];
    float dongia[10];
    float kg = 49, tongvalue = 0, tongkg = 0;
    a[0] = DoVat(3,4,"A");
    a[1] = DoVat(5,7,"B");
    a[2] = DoVat(10,12,"C");
    a[3] = DoVat(15,25,"D");
    // tính trong lượng
    for(int i = 0; i < 4; i++)
    {
        dongia[i] = a[i].tinhDonGia();
    }   
    sort(dongia,dongia + 4);
    for(int i = 3; i >= 0; i--)
    {
        cout<<dongia[i]<<" ";
    }
    // for(int i = 0; i < 4; i++)
    // {
    //     if(tongkg+a[i].trongluong > kg)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         int soluong =kg / a[i].trongluong;
    //         tongvalue+=a[i].tinhDonGia()*soluong;
    //         tongkg=tongkg + a[i].trongluong*soluong;
    //         cout<<soluong<<"\n";
    //         cout<<"tong kg: "<<tongkg<<"\ntong value: "<<tongvalue;
    //     }
    // }
    return 0;
}