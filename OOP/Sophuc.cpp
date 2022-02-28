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
void Sophuc::xuat()
{
    cout<<phanthuc<<" + "<<phanao<<"i";
}
int main()
{
    Sophuc a; // so phuc mac dinh
    Sophuc b(1,2); //so phuc co tham so
    cout<<"a = ";
    a.xuat();
    cout<<endl<<"b = ";
    b.xuat();
    return 0;
}