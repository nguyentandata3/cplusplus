#include <iostream>
using namespace std;
class Sophuc
{
    private:
        float phanthuc;
        float phanao;
    public:
        //constructor
        Sophuc();
        Sophuc(float phanthuc, float phanao);
        //input, output
        void nhap();
        void xuat();
};
Sophuc::Sophuc()
{   
    this->phanthuc = 0;
    this->phanao = 0;
}
Sophuc::Sophuc(float phanthuc, float phanao)
{
    this->phanthuc = phanthuc;
    this->phanao = phanao;
}
void Sophuc::nhap()
{
    cout<<"phan thuc: ";
    cin>>phanthuc;
    cout<<"phan ao: ";
    cin>>phanao;
}
void Sophuc::xuat()
{
    if(phanao > 0)
    {
        cout<<phanthuc<<" + "<<phanao<<"i"<<endl;
    }
    else
    {
        cout<<phanthuc<<" "<<phanao<<"i"<<endl;
    }
}
int main()
{
    Sophuc a;//khoi tao mac dinh
    Sophuc b(2,-3);//khoi tao co doi so
    b.xuat();
    return 0;
}