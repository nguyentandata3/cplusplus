//Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
// Bài 21: Tính tổng tất cả các “ ước số” của số nguyên dương n
// Bài 22:Tính tích tất cả các “ước số” của số nguyên dương n
// Bài 23: Đếm số lượng “ước số” của số nguyên dương n
// Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
// Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
//thu vien
#include <iostream>
using namespace std;
void uocSoNguyenDuong(int a);
int tinhTongSoNguyenDuong(int a);
int tinhTichSoNguyenDuong(int a);
int demSoLuongSND(int a);
void timUocSoLeSND(int a);
int tinhTongUocSoChanSND(int a);
int main()
{
    //khai bao
    int mang[50];
    int a;
    //xu ly
    cout<<"a = ";
    cin>>a;
    uocSoNguyenDuong(a);
    cout<<endl;
    cout<<"Tong cac so nguyen duong: "<<tinhTongSoNguyenDuong(a);
    cout<<endl;
    cout<<"Tich cac so nguyen duong: "<<tinhTichSoNguyenDuong(a);
    cout<<endl;
    cout<<"Co tat ca "<<demSoLuongSND(a)<<" so nguyen duong";
    cout<<endl;
    timUocSoLeSND(a);
    cout<<endl;
    cout<<"Tong uoc so chan SND la: "<<tinhTongUocSoChanSND(a);
    cout<<endl;
    //tra ve
    
    return 0;
}
void uocSoNguyenDuong(int a)
{   
    cout<<"uoc so nguyen duong la: ";
    for(int i = 1;i <= a;i++)
    {
        if (a%i==0)
        {
            cout<<i<<" ";
        }
    }
}
int tinhTongSoNguyenDuong(int a)
{
    int s = 0;
    for(int i = 1;i <= a;i++)
    {
        if(a%i==0)
        {
            s = s+i;
        }
    }
    return s;
}
int tinhTichSoNguyenDuong(int a)
{
    int tich = 1;
    for(int i = 1;i <= a;i++)
    {
        if (a%i==0)
        {
            tich*=i;
        }
    }

    return tich;
}
int demSoLuongSND(int a)
{
    int s = 0;
    for(int i = 1;i <= a;i++)
    {
        if (a%i==0)
        {
            s+=1;
        }
    }
    return s;
}
void timUocSoLeSND(int a)
{
    cout<<"Uoc le SND la: ";
    for(int i = 1;i <= a;i++)
    {
         if (a%i== 0 && i%2!=0)
         {
             cout<<i<<" ";
         }
    }
}
int tinhTongUocSoChanSND(int a)
{
    int tong = 0;
    for(int i = 1;i <= a;i++)
    {
        if (a%i==0 && i%2==0)
        {
            tong+=i;
        }
    }
    return tong;
}