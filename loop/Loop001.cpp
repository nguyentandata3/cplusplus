//nhap mang: v1 dung for nhap_v1
//v2: dung while nhap_v2
//xuat mang: v1 dung for xuat_v1
//v2: dung while xuat_v2
//v3: dung đệ quy
#include <iostream>
using namespace std;
void nhap_v1(int a[], int &n);
void nhap_v2(int a[], int &n);
void xuat_v1(int a[], int n);
void xuat_v2(int a[], int n);
void xuat_v3(int a[], int n, int i);
void sapxep(int a[], int n);
int main()
{
    int a[100], n;
    nhap_v2(a,n);
    xuat_v3(a,n,0);
    return 0;
}
void nhap_v1(int a[], int &n)
{
    cout<<"n = ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void nhap_v2(int a[], int &n)
{
    cout<<"n = ";
    cin>>n;
    int i = 0;
    while(i < n)
    {
        cin>>a[i];
        i++;
    }
}
void xuat_v1(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void xuat_v2(int a[], int n)
{
    int i = 0;
    while(i < n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    cout<<endl;
}
void sapxep(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void xuat_v3(int a[], int n, int i)
{
    if(i==n)
    {
        return;
    }
    cout<<a[i]<<" ";
    xuat_v3(a,n,i+1);
}