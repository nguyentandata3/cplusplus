#include <iostream>
using namespace std;

typedef struct SoPhuc
{
    float phanthuc;
    float phanao;
};
void nhapSoPhuc(SoPhuc &sophuc);
void xuatSoPhuc(SoPhuc sophuc);
int main()
{
    //khai bao
    SoPhuc sophuc;
    //xu ly
    nhapSoPhuc(sophuc);
    xuatSoPhuc(sophuc);
    //tra ve
    return 0;
}
void nhapSoPhuc(SoPhuc &sophuc)
{
    cout<<"phan thuc = ";
    cin>>sophuc.phanthuc;
    cout<<"phan ao = ";
    cin>>sophuc.phanao;
}
void xuatSoPhuc(SoPhuc sophuc)
{
    if (sophuc.phanao==0)
    {
        cout<<sophuc.phanthuc<<endl;
    }
    else if (sophuc.phanao>0)
    {
        cout<<sophuc.phanthuc<<" + "<<sophuc.phanao<<"i"<<endl;
    }
    else 
    {
        cout<<sophuc.phanthuc<<" "<<sophuc.phanao<<"i"<<endl;
    }
}