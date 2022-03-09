#include <iostream>
using namespace std;
void nhap(float a[], int &soluong);
void xuat(float a[], int soluong);
void swap(float &a, float &b);
void sapxeptangdan(float a[], int soluong);
int main()
{
    float a[100];
    int n;
    nhap(a,n);
    sapxeptangdan(a,n);
    cout<<"Sau khi sap xep: "<<endl;
    xuat(a,n);
    return 0;
}
void nhap(float a[], int &soluong)
{
    cout<<"n = ";
    cin>>soluong;
    for(int i = 0; i < soluong; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
void xuat(float a[], int soluong)
{
    for(int i = 0; i < soluong; i++)
    {
        cout<<"a["<<i<<"]: "<<a[i]<<endl;
    }
}
void swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}
void sapxeptangdan(float a[], int soluong)
{
    for(int i = 0; i < soluong-1; i++)
    {
        for(int j = i+1; j < soluong; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
}
