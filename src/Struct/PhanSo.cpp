#include <iostream>
using namespace std;
typedef struct PhanSo
{
    int tuso;
    int mauso;
};
void nhapPhanSo(PhanSo &phanso);
void xuatPhanSo(PhanSo phanso);
void menu(PhanSo phanso);
int main()
{
    //khai bao
    PhanSo phanso;
    //xu ly
    nhapPhanSo(phanso);
    //xuatPhanSo(phanso);
    menu(phanso);
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
void menu(PhanSo phanso)
{
    int select;
    do
    {    
        cout<<"--------------Lua chon cua ban la--------------"<<endl;
        cout<<"1. Nhap lai"<<endl;
        cout<<"2. Xuat phan so"<<endl;
        cout<<"3. Rut gon phan so"<<endl;
        cin>>select;
        switch(select)
        {
            case 1: 
            {
                nhapPhanSo(phanso);
                break;
            }
            case 2:
            {
                xuatPhanSo(phanso);
                break;
            }
            case 3:
            {
                cout<<"rut gon phan so."<<endl;
                break;
            }
            default:
            {
                cout<<"nhap sai."<<endl;
                break;
            }
        } cout<<"Nhap 1 de thoat chuong trinh. Nhan 2 de tiep tuc chuong trinh: ";
        cin>>select;
    } while(select!=1);
}

