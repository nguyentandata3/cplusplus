#include <iostream>
using namespace std;

void nhapSoPhuc(float &phanthuc,float &phanao);
void xuatSoPhuc(float phanthuc, float phanao);
int main()
{
    //khai bao
    float phanthuc,phanao;

    //xu ly
    nhapSoPhuc(phanthuc,phanao);
    xuatSoPhuc(phanthuc,phanao);
    //tra ve
    return 0;
}
void nhapSoPhuc(float &phanthuc,float &phanao)
{
    cout<<"phan thuc: ";
    cin>>phanthuc;
    cout<<"phan ao: ";
    cin>>phanao;
}
void xuatSoPhuc(float phanthuc, float phanao)
{
    if (phanao > 0)
    {
        cout<<phanthuc<<" + "<<phanao<<"i";
    }
    else if (phanao < 0)
    {
        cout<<phanthuc<<" "<<phanao<<"i";
    }
    else cout<<phanthuc;
}