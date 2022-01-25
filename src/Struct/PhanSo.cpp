#include <iostream>
using namespace std;

typedef struct PhanSo
{
    int tuso;
    int mauso;
};
void nhapPhanSo(PhanSo &phanso);
void xuatPhanSo(PhanSo phanso);
int main()
{
    //khai bao
    PhanSo phanso;
    //xu ly
    nhapPhanSo(phanso);
    xuatPhanSo(phanso);
    return 0;
}
void nhapPhanSo(PhanSo &phanso)
{
    cout<<"tu so = ";
    cin>>phanso.tuso;
    cout<<"mau so = ";
    cin>>phanso.mauso;
}
void xuatPhanSo(PhanSo phanso)
{
    if (phanso.mauso==0)
    {
        cout<<"Khong ton tai phan so nay"<<endl;
    }
    else if (phanso.mauso>0)
    {
        cout<<phanso.tuso<<"/"<<phanso.mauso<<endl;
    }
    else 
    {
        cout<<phanso.tuso<<" / ("<<phanso.mauso<<")"<<endl;
    }
}