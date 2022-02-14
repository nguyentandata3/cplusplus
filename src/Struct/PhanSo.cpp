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
int UCLN(int a, int b);
PhanSo rutgonPhanSo(PhanSo phanso);
int sosanhPhanSo(PhanSo phanso1,PhanSo phanso2);
void hoanviPhanSo(PhanSo &phanso1,PhanSo &phanso2);
int main()
{
    //khai bao
    PhanSo phanso,phanso2;
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
        cout<<"4. So sanh 2 phan so"<<endl;
        cout<<"5. Hoan vi 2 phan so"<<endl;
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
                xuatPhanSo(rutgonPhanSo(phanso));
                break;
            }
            case 4:
            {
                if (sosanhPhanSo(phanso,phanso) == 0)
                cout<<"2 phan so bang nhau."<<endl;
                else if (sosanhPhanSo(phanso,phanso)==1)
                cout<<"Phan so 1 lon hon phan so 2."<<endl;
                else cout<<"Phan so 2 lon hon phan so 1."<<endl;
                break;
            }
            case 5:
                PhanSo phanso2;
                nhapPhanSo(phanso2);
                hoanviPhanSo(phanso,phanso2);
                cout<<"Sau khi hoan vi"<<endl;
                cout<<"phan so 1: ";
                xuatPhanSo(phanso);
                cout<<"phan so 2: ";
                xuatPhanSo(phanso2);
                cout<<endl;
                break;
            default:
            {
                cout<<"nhap sai."<<endl;
                break;
            }
        } cout<<"Nhap 1 de thoat chuong trinh. Nhan 2 de tiep tuc chuong trinh: ";
        cin>>select;
    } while(select!=1);
}
int UCLN(int a, int b){// 8 6
    if(b==0){
        return a;
    }
    else{
        return UCLN(b,a%b);
        // 6 2
        // 2 0
    }
}
PhanSo rutgonPhanSo(PhanSo phanso)
{
    PhanSo phansomoi;// 8/6 = 4/3
    phansomoi.tuso = phanso.tuso / UCLN(phanso.tuso,phanso.mauso);
    phansomoi.mauso = phanso.mauso / UCLN(phanso.tuso,phanso.mauso);
    return phansomoi;

}
int sosanhPhanSo(PhanSo phanso1,PhanSo phanso2)
{
    if(phanso1.tuso * phanso2.mauso > phanso2.tuso * phanso1.mauso) return 1;
    else if (phanso1.tuso * phanso2.mauso < phanso2.tuso * phanso1.mauso) return -1;
    else return 0;
}
void hoanviPhanSo(PhanSo &phanso1,PhanSo &phanso2)
{
    PhanSo temp;
    temp = phanso1;
    phanso1 = phanso2;
    phanso2 = temp;
}


