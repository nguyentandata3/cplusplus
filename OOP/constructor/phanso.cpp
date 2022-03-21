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
            if(S.mau > 0) output<<"Phan so: "<<S.tu<<" / "<<S.mau<<endl;
            else output<<"Phan so: "<<S.tu<<" / ("<<S.mau<<")"<<endl;
            return output;
        }
        Phanso operator+(const Phanso &c)
        {
            Phanso phanso;
            phanso.tu = c.tu + this->tu;
            phanso.mau = c.mau + this->mau;
            return phanso;
        }
        Phanso operator-(const Phanso &c)
        {
            Phanso phanso;
            phanso.tu = this->tu - c.tu;
            phanso.mau = this->mau - c.mau;
            return phanso;
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
    Phanso a, c(0,0);
    float e,f;
    Phanso b(4,-5);
    a.settu(8);
    a.setmau(9);
    b.settu(4);
    b.setmau(-5);
    c=a+b;
    c=a-b;
    cout<<c;
    return 0;
}