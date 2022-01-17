#include <iostream>
using namespace std;
#define MAX 100
void nhap(int a[],int &n);
void lietkeCacPhanTuLe(int a[],int n);
int tinhTongCoBaoNhieuSoChan(int a[],int n);
int tinhTongCoBaoNhieuSoLe(int a[],int n);
int main()
{
    int a[MAX]; //khai bao mang (toi da)
    int n; //nhap mang
    nhap(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //liet ke cac so chan
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    lietkeCacPhanTuLe(a,n);
    cout<<endl;
    cout<<"Co tat ca "<<tinhTongCoBaoNhieuSoChan(a,n)<<" so chan";
    cout<<endl;
    cout<<"Co "<<tinhTongCoBaoNhieuSoLe(a,n)<<" so le";
    cout<<endl;
    return 0;
}
void nhap(int a[],int &n)
{
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
}
void lietkeCacPhanTuLe(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2!=0)
        {
            cout<<a[i]<<" ";
        }
    }   
    cout<<endl;
}
int tinhTongCoBaoNhieuSoChan(int a[],int n)
{
    int tong = 0;
    for(int i = 0;i < n;i++)
    {
        if (a[i]%2==0)
        {
            tong+=1;
        }
    }
    return tong;
}
int tinhTongCoBaoNhieuSoLe(int a[],int n)
{
    int tongLe = 0;
    for (int i = 0;i < n;i++)
    {
        if (a[i]%2!=0)
        {
            tongLe++;
        }
    }
    return tongLe;
}