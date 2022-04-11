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
    this->tentheloai = tentheloai;
    this->matheloai = matheloai;
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

int main()
{
    theloai a,b,c;
    a = theloai("C001","A003");
    a.xuat();
    return 0;
}