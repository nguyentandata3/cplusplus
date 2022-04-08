#include <iostream>
#include <string>
#include <iomanip>
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
    cout<<setw(15)<<"Ma the loai"<<setw(20)<<"Ten the loai";
    cout<<setw(15)<<matheloai<<setw(20)<<tentheloai;
}
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
    cout<<setw(15)<<"Ma xuat ban"<<setw(20)<<"Ten nha xuat ban";
    cout<<setw(15)<<maxuatban<<setw(20)<<tennhaxuatban;
}

int main()
{
    theloai a;
    a.nhap();
    a.xuat();
    return 0;
}