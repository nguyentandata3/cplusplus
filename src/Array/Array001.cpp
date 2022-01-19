//nhap vao 1 mang va in ra so chinh phuong
#include <iostream>
using namespace std;
#define MAX 50
void nhapMang(int a[],int &n); //khai bao ham nhap
void xuatMang(int a[],int n); //khai bao ham xuat
int main()
{
    //khai bao
    int mang[MAX];
    int n;
    nhapMang(mang,n);
    xuatMang(mang,n);
    return 0;
}
void nhapMang(int a[],int &n)//dinh nghia ham nhap
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
void xuatMang(int a[],int n)//dinh nghia ham xuat
{
    for(int i = 0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}