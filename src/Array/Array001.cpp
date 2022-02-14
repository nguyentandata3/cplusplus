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
void hoanvi2so(int a, int b);
void sapXepMang(int a[], int n);
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
    }
    else cout<<"Khong ton tai so chinh phuong";
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
void hoanvi2so(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void sapXepMang(int a[], int n){
    // 3 2 1 3 2
    // i = 0, j=1: 2 3 1 3 2
    // i = 0, j = 2: (1) 3 2 3 2
    //...
    // i = 1, (1) (2) ...
    for(int i=0;i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(a[i]>a[j]){
                hoanvi2so(a[i],a[j]);
            }
        }
    }
}