//nhap vao 1 mang va in ra so chinh phuong
#include <iostream>
#include <cmath>
using namespace std;
#define MAX 50
void nhapMang(int a[],int &n); //khai bao ham nhap
void xuatMang(int a[],int n); //khai bao ham xuat
bool laSoChinhPhuong(int a);//khai bao ham kiem tra
void lietkeSoChinhPhuong(int a[], int n); //khai bao ham liet ke so chinh phuong
bool tontaiSoChinhPhuong(int a[],int n); //khai bao ham kiem tra ton tai so chinh phuong
int main()
{
    //khai bao
    int mang[MAX];
    int n;
    nhapMang(mang,n);
    xuatMang(mang,n);
    lietkeSoChinhPhuong(mang,n);
    if(tontaiSoChinhPhuong(mang,n)==1)
    {
        cout<<"Co ton tai so chinh phuong";
    }else cout<<"Khong ton tai so chinh phuong";
    cout<<endl;
    
    return 0;
}
void nhapMang(int a[],int &n)//xay dung ham nhap
{
    //nhap vao so luong phan tu
    cout<<"n = ";
    cin>>n;
    //nhap vao cac gia tri mang
    for(int i = 0;i < n;i++)
    {
        cout<<"phan tu thu "<<i+1<<": ";
        cin>>a[i];
    }
}
void xuatMang(int a[],int n)//xay dung ham xuat
{
    for(int i = 0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
bool laSoChinhPhuong(int a) //xay dung ham kiem tra
{
    bool test = false;
    if (sqrt(a)==(int)sqrt(a))
    {
        if (a!=1)
        test = true;
    }
    return test;
}
void lietkeSoChinhPhuong(int a[], int n) //xay dung ham liet ke so chinh phuong
{
    for (int i = 0;i < n;i++)
    {
        if (laSoChinhPhuong(a[i])==1)
        {

            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
}
bool tontaiSoChinhPhuong(int a[],int n) //xay dung ham kiem tra ton tai so chinh phuong
{
    bool test = false;
    for (int i = 0;i < n;i++)
    {
        if(laSoChinhPhuong(a[i])==true)
        {
            test = true;
            break;
        }
    }
    return test;
}