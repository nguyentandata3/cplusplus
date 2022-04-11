#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
class theloai
{
    private:
        string tentheloai;
        string matheloai;
    public:
        theloai(){};
        theloai(string tentheloai, string matheloai);
        void nhap();
        void xuat();
        void settentheloai(string tentheloai){this->tentheloai = tentheloai;}
        string  gettentheloai(){return tentheloai;}
        void setmatheloai(string matheloai){this->matheloai = matheloai;}
        string getmatheloai(){return matheloai;}
};
theloai::theloai(string tentheloai, string matheloai)
{    
    this->matheloai = matheloai;
    this->tentheloai = tentheloai;
}
void theloai::nhap()
{
    cin>>matheloai;
    cin>>tentheloai;
}
void theloai::xuat()
{
    cout<<setw(15)<<"Ma the loai"<<setw(20)<<"Ten the loai"<<endl;
    cout<<setw(15)<<matheloai<<setw(20)<<tentheloai<<endl;
}
// void theloai::settentheloai(string tentheloai)
// {
//     this->tentheloai = tentheloai;
// }
// string  theloai::gettentheloai()
// {
//     return tentheloai;
// }
// void theloai::setmatheloai(string matheloai)
// {
//     this->matheloai = matheloai;
// }
// string theloai::getmatheloai()
// {
//     return matheloai;
// }
class nhaxuatban
{
    private:
        string maxuatban;
        string tennhaxuatban;
    public:
        nhaxuatban(){};
        nhaxuatban(string maxuatban, string tenxuatban);
        void nhap();
        void xuat();
};
nhaxuatban::nhaxuatban(string maxuatban, string tennhaxuatban)
{
    this->maxuatban = maxuatban;
    this->tennhaxuatban = tennhaxuatban;
}
void nhaxuatban::nhap()
{
    cin>>maxuatban;
    cin>>tennhaxuatban;
}
void nhaxuatban::xuat()
{
    cout<<setw(15)<<"Ma xuat ban"<<setw(20)<<"Ten nha xuat ban"<<endl;
    cout<<setw(15)<<maxuatban<<setw(20)<<tennhaxuatban<<endl;
}
class sach
{
    private:
        string id;
        string name;
        theloai a;
        nhaxuatban b;
        float gia;
    public:
        sach();
        sach(string id, string name, theloai a, nhaxuatban b, float gia);
        void nhap();
        void xuat();
};
sach::sach()
{
    this->id = "error";
    this->name = "error";
}
sach::sach(string id, string name, theloai a, nhaxuatban b, float gia)
{
    this->id = id;
    this->name = name;
    this->a = a;
    this->b = b;
    this->gia = gia;
}
void sach::nhap()
{
    cin>>id;
    cin>>name;
    a.nhap();
    b.nhap();
    cin>>gia;
}
void sach::xuat()
{
    cout<<setw(5)<<"id"<<setw(15)<<"name";
    a.xuat();
    b.xuat();
}
int main()
{
    theloai a,b,c;
    nhaxuatban m,n,o;
    a = theloai("C001","A003"); //a.nhap("C001","A003");
    b = theloai("D123","E456");   
    m = nhaxuatban("001","Dinh Vu");
    sach e;
    e = sach("005","Confirm",a,m,50000);
    e.xuat();
    return 0;
}