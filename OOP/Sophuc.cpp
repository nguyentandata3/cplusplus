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
        void nhap();
        Sophuc(int phannguyen, int phanphuc); //co tham so
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
    cout<<phanthuc<<" + "<<phanao<<"i";
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
    return 0;
}