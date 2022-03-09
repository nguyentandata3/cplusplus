#include <iostream>
using namespace std;
void nhap(int a[], int &soluong);
int vitriMin(int a[], int soluong);
int main()
{
    int a[100];
    int n;
    nhap(a,n);
    cout<<"vi tri so nho nhat: "<<vitriMin(a,n)<<endl;
    return 0;
}

void nhap(int a[], int &soluong)
{
    cout<<"n = ";
    cin>>soluong;
    for(int i = 0; i < soluong; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
int vitriMin(int a[], int soluong)
{
    int min = a[0];
    int vitri;
    for(int i = 0; i < soluong; i++)
    {
        if(min > a[i])
        {
            min = a[i];
            vitri = i;
        }
    }
    return vitri;
}