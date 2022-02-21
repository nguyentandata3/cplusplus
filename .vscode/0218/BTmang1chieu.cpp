#include <iostream>
using namespace std;
#define MAX 100
void nhap(int a[MAX], int &n);
void xuat(int a[MAX], int n);
void xoaPhanTuAM(int a[MAX], int &n);
int main()
{
    int a[MAX];
    int n;
    nhap(a,n);
    xoaPhanTuAM(a,n);
    xuat(a,n);
    return 0;
}
void nhap(int a[MAX], int &n)
{
    cout<<"n = ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    // cout<<endl;
}
void xuat(int a[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    // cout<<endl;
}
void xoaPhanTuAM(int a[MAX], int &n)
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            for (int j = i+1; j < n; j++)
            {
                if(a[j] > 0) a[i] = a[j];
            }
            m++;
        }
    }
    // n-=m;
    // n-=m;
    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == m)
    //     {
    //         a[i] = a[i+1];
    //     }
    // }
}
