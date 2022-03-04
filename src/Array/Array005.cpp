// nhap 2 mang
// cong 2 mang
// tim phan tu trung nhau
// tim phan tu co trong mang a va k co trong mang b
#include <iostream>
using namespace std;
#define MAX 50
void nhap(int mang[], int soluong);
void xuat(int mang[], int soluong);
void congMang(int manga[], int mangb[], int soluonga, int soluongb);
int main()
{
    int a[MAX], b[MAX];
    int c[MAX][MAX];
    int n1,n2;
    cout<<"So luong mang a: ";
    cin>>n1;
    nhap(a,n1);
    cout<<"So luong mang b:";
    cin>>n2;
    nhap(b,n2);
    cout<<"Mang a: "<<endl;
    xuat(a,n1);
    cout<<"Mang b: "<<endl;
    xuat(b,n2);
    return 0;
}
void nhap(int mang[], int soluong)
{
    for(int i = 0; i < soluong; i++)
    {
        cout<<"["<<i<<"]: ";
        cin>>mang[i];
    }
    cout<<endl;
}
void xuat(int mang[], int soluong)
{
    for(int i = 0; i < soluong; i++)
    {
        cout<<mang[i]<<" ";
    }
    cout<<endl;
}
