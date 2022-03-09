#include <iostream>
using namespace std;
void nhap(float a[], int &soluong);
void xuat(float a[], int soluong);
float timMax(float a[], int soluong);
int main()
{
    float a[100];
    int n;
    nhap(a,n);
    cout<<"max = "<<timMax(a,n);
    return 0;
}
void nhap(float a[], int &soluong)
{
    cout<<"n = ";
    cin>>soluong;
    for(int i = 0; i < soluong; i++)
    {
        cout<<"a["<<i+1<<"]: ";
        cin>>a[i];
    }
}
void xuat(float a[], int soluong)
{
    for(int i = 0; i < soluong; i++)
    {
        cout<<"a["<<i+1<<"]: "<<a[i];
    }
}
float timMax(float a[], int soluong)
{
    float max = a[0];
    for (int i = 0; i < soluong; i++)
    {
        if(max<a[i]) max = a[i];
    }
    return max;
}
