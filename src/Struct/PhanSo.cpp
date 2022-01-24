#include <iostream>
using namespace std;
void nhapPhanSo(int &tuso, int &mauso);
void xuatPhanSo(int tuso,int mauso);
int main()
{
    //khai bao
    int tuso,mauso;
    //xu ly
    nhapPhanSo(tuso,mauso);
    xuatPhanSo(tuso,mauso);
    //tra ve
    return 0;
}
void nhapPhanSo(int &tuso, int &mauso)
{
    cout<<"Tu so = ";
    cin>>tuso;
    cout<<"Mau so = ";
    cin>>mauso;
}
void xuatPhanSo(int tuso,int mauso)
{
    if (mauso==0)
    {
        cout<<"Khong ton tai phan so nay"<<endl;
    }
    else if (mauso>0)
    {
        cout<<tuso<<"/"<<mauso;
    }
    else 
    {
        cout<<tuso<<" / ("<<mauso<<")";
    }
}