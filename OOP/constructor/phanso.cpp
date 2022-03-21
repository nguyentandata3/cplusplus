#include <iostream>
using namespace std;
class Phanso
{
    private:
        float tu,mau;
    public:
        Phanso();
        Phanso(float tu, float mau);
        void nhap();
        void xuat();
        void settu(float tu){this-> tu = tu;}
        int gettu(){return tu;}
        void setmau(float mau){this-> mau = mau;}
        int getmau(){return mau;}
        friend istream &operator >>(istream &input, Phanso &s)
        {
            cout<<"phan so: ";
            input>>s.tu>>s.mau;
            return input;
        }
        friend ostream &operator <<(ostream &output, const Phanso &S)
        {
            output<<"So phuc: "<<S.tu<<" + "<<S.mau<<endl;
            return output;
        }
};
Phanso::Phanso()
{
    this->tu = 0;
    this->mau = 0;
}
Phanso::Phanso(float tu, float mau)
{
    this->tu = tu;
    this->mau = mau;
}
void Phanso::nhap()
{
    cout<<"tu so: ";
    cin>>tu;
    cout<<"mau so: ";
    cin>>mau;
}
void Phanso::xuat()
{
    if(mau > 0) cout<<tu<<"/"<<mau<<endl;
    else cout<<tu<<"/ ("<<mau<<")"<<endl;
}
int main()
{
    Phanso a;
    Phanso b(4,-5);
    cin>>a;
    cin>>b;
    a.xuat();
    b.xuat();
    return 0;
}