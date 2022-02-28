#include <iostream>
using namespace std;
class Sophuc
{
    //du lieu
    private:
        int phanthuc, phanao;
    //phuong thuc
    public:
        Sophuc(); //mac dinh
        Sophuc(int phannguyen, int phanphuc); //co tham so
        void setPhanThuc(int phanthuc)
        {
            this->phanthuc = phanthuc;
        };
        int getPhanThuc()
        {
            return phanthuc;
        };
        void setPhanao(int phanao)
        {
            this->phanao = phanao;
        };
        int getPhanao()
        {
            return phanao;
        };
        void nhap();
        void xuat();
};
Sophuc::Sophuc()
{
    this->phanthuc = 0;
    this->phanao = 0;
}
Sophuc::Sophuc(int phanthuc, int phanao)
{
    this->phanthuc = phanthuc;
    this->phanao = phanao;
}
void Sophuc::nhap()
{   
    cout<<"phan thuc = ";
    cin>>phanthuc;
    cout<<"phan ao = ";
    cin>>phanao;
}
void Sophuc::xuat()
{
    cout<<phanthuc<<" + "<<phanao<<"i"<<endl;
}
int main()
{
    Sophuc a; // so phuc mac dinh
    Sophuc b(1,2); //so phuc co tham so
    Sophuc c;
    cout<<"a = ";
    a.xuat();
    cout<<endl<<"b = ";
    b.xuat();
    cout<<endl<<"Nhap so phuc c"<<endl;
    c.nhap();
    c.xuat();
    c.setPhanThuc(12);
    cout<<c.getPhanThuc()<<endl;
    c.xuat();
    c.setPhanao(2);
    cout<<c.getPhanao()<<endl;
    c.xuat();
    return 0;
}