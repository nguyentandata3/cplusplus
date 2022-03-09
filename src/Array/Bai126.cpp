#include <iostream>
using namespace std;
void nhap(float a[], int &soluong);
float tong(float a[], int soluong);
int main()
{
    int n;
    float a[100];
    nhap(a,n);
    cout<<"Tong so am: "<<tong(a,n)<<endl;
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
float tong(float a[], int soluong)
{
    float tong = 0;
    for(int i = 0; i < soluong; i++)
    {
        if(a[i] < 0)
        {
            tong+=a[i];
        }
    }
    return tong;
}