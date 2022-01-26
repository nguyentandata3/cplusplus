#include <iostream>
using namespace std;

typedef struct SoPhuc
{
    float phanthuc;
    float phanao;
};
void nhapSoPhuc(SoPhuc &sophuc);
void xuatSoPhuc(SoPhuc sophuc);
SoPhuc tongSoPhuc(SoPhuc sophuc1, SoPhuc sophuc2);// khai bao ham tim tong
SoPhuc hieuSoPhuc(SoPhuc sophuc1, SoPhuc sophuc2);// khai bao ham tim hieu
SoPhuc tichSoPhuc(SoPhuc sophuc1, SoPhuc sophuc2); //khai bao ham tim tich
int main()
{
    //khai bao
    SoPhuc sophuc1,sophuc2, tong,hieu;
    //xu ly
    nhapSoPhuc(sophuc1);
    nhapSoPhuc(sophuc2);
    xuatSoPhuc(sophuc1);
    xuatSoPhuc(sophuc2);
    tong = tongSoPhuc(sophuc1,sophuc2);
    cout<<"Tong 2 so phuc: ";
    xuatSoPhuc(tong);
    xuatSoPhuc(hieu);
    xuatSoPhuc(tich);
    //tra ve
    return 0;
}
void nhapSoPhuc(SoPhuc &sophuc)
{
    cout<<"phan thuc = ";
    cin>>sophuc.phanthuc;
    cout<<"phan ao = ";
    cin>>sophuc.phanao;
}
void xuatSoPhuc(SoPhuc sophuc)
{
    if (sophuc.phanao==0)
    {
        cout<<sophuc.phanthuc<<endl;
    }
    else if (sophuc.phanao>0)
    {
        cout<<sophuc.phanthuc<<" + "<<sophuc.phanao<<"i"<<endl;
    }
    else 
    {
        cout<<sophuc.phanthuc<<" "<<sophuc.phanao<<"i"<<endl;
    }
}
SoPhuc tongSoPhuc(SoPhuc sophuc1, SoPhuc sophuc2)// xay dung ham tinh tong

{
    SoPhuc tong;
    tong.phanthuc = sophuc1.phanthuc + sophuc2.phanthuc;
    tong.phanao = sophuc1.phanao + sophuc2.phanao;
    return tong;
}
SoPhuc hieuSoPhuc(SoPhuc sophuc1, SoPhuc sophuc2)// xay dung ham tim hieu
{
    SoPhuc hieu;
    //xu ly
    hieu.phanthuc = sophuc1.phanthuc - sophuc2.phanthuc;
    hieu.phanao = sophuc1.phanao - sophuc2.phanao;
    return hieu;
}
SoPhuc tichSoPhuc(SoPhuc sophuc1, SoPhuc sophuc2)//xay dung ham tim tich
{
    SoPhuc tich;
    //xu ly
    //zz′=aa′−bb′+(ab′+a′b)i.
    tich.phanthuc = sophuc1.phanthuc*sophuc2.phanthuc - sophuc1.phanao*sophuc2.phanao;
    tich.phanao = sophuc1.phanthuc*sophuc2.phanao + sophuc2.phanao*sophuc1.phanthuc;
    return tich;
}
