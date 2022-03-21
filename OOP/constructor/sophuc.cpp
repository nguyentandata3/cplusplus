#include <iostream>
#include <cmath>
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
        void setthuc(float thuc){this->phanthuc = thuc;}
        float getthuc(){return phanthuc;}
        void setao(float ao){this->phanao = ao;}
        float getao(){return phanao;}
        Sophuc operator+(const Sophuc &a);
        Sophuc operator-(const Sophuc &a);
        Sophuc operator*(const Sophuc &a);
        Sophuc operator/(const Sophuc &a);
        friend ostream &operator <<(ostream &output, const Sophuc &a)
        {
            if(a.phanao > 0 && a.phanao != 1) cout<<"So phuc: "<<a.phanthuc<<" + "<<a.phanao<<"i"<<endl;
            else if(a.phanao == 1) cout<<"So phuc: "<<a.phanthuc<<" + i"<<endl;
            else if(a.phanao == -1) cout<<"So phuc: "<<a.phanthuc<<" - i"<<endl;
            else cout<<"So phuc: "<<a.phanthuc<<" "<<a.phanao<<"i"<<endl;
            return output;
        };
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
Sophuc Sophuc::operator+(const Sophuc &a)
{
    Sophuc sophuc;
    sophuc.phanao = this->phanao + a.phanao;
    sophuc.phanthuc = this->phanthuc + a.phanthuc;
    return sophuc;
}
// friend ofstream &operator <<(ostream &output, const Sophuc &a)
// {
//     if(a.phanao > 0) cout<<"So phuc: "<<a.phanthuc<<" + "<<a.phanao<<"i"<<endl;
//     else cout<<"So phuc: "a.phanthuc<<" "<<a.phanao<<"i"<<endl;
//     return output;
// }
Sophuc Sophuc::operator-(const Sophuc &a)
{
    Sophuc sophuc;
    sophuc.phanthuc = this->phanthuc - a.phanthuc;
    sophuc.phanao = this->phanao - a.phanao;
    return sophuc;
}
Sophuc Sophuc::operator*(const Sophuc &a)
{
    Sophuc sophuc;
    sophuc.phanthuc = this->phanthuc*a.phanthuc - this->phanao*a.phanao;
    sophuc.phanao = this->phanthuc*a.phanao + a.phanthuc*this->phanao;
    return sophuc;
}
Sophuc Sophuc::operator/(const Sophuc &a)
{
    Sophuc sophuc;
    sophuc.phanthuc =(this->phanthuc*a.phanthuc+a.phanao*this->phanao)/(pow(a.phanthuc,2)+pow(a.phanao,2));
    sophuc.phanao = (a.phanthuc*this->phanao-this->phanthuc*a.phanao)/(pow(a.phanthuc,2)+pow(a.phanao,2));
    return sophuc;
}
int main()
{
    Sophuc a(14,7);//khoi tao mac dinh
    Sophuc b(2,-3),c;//khoi tao co doi so
    c = a - b;
    cout<<c;
    c = a*b;
    cout<<c;
    c = a/b;
    cout<<c;
    return 0;
}