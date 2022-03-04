 // gio, phut, giay
 // class
 // ham khoi tao
 // set get
// nhap, xuat
#include <iostream>
using namespace std;
class Time
{
    private:
        int gio;
        int phut;
        int giay;
    public:
        Time();
        Time(int gio, int phut, int giay);
        void nhap();
        void xuat();
        void setgio(int gio);
        int getgio();
        void setphut(int phut);
        int getphut();
        void setgiay(int giay);
        int getgiay();    
};
int main()
{
    Time t1,t2;
    t2.nhap();
    t2.xuat();
    cout<<t2.getgio();
    return 0;
}
Time::Time()
{
    this->gio = 0;
    this->phut = 0;
    this->giay = 0;
}
Time::Time(int gio, int phut, int giay)
{
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;
}
void Time::nhap()
{
    cout<<"Gio: ";
    cin>>gio;
    cout<<"Phut: ";
    cin>>phut;
    cout<<"Giay: ";
    cin>>giay;
}
void Time::xuat()
{
    cout<<gio<<":"<<phut<<":"<<giay<<endl;    
}
void Time::setgio(int gio)
{
    this->gio = gio;
}
int Time::getgio()
{
    return gio;
}
void Time::setphut(int phut)
{
    this->phut = phut;
}
int Time::getphut()
{
    return phut;
}
void Time::setgiay(int giay)
{
    this->giay = giay;
}
int Time::getgiay()
{
    return giay;
}