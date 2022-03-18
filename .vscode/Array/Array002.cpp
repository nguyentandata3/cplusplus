#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
bool find(int a[], int n, int x);
void sapxep(int a[], int n);
int timkiemnhiphan(int a[], int n, int left, int right, int x);
int main()
{
    
    int a[100], n, x=5;
    nhap(a,n);   
    if(find(a,n,x)==true) cout<<"co "<<x<<" trong mang."<<endl;
    else cout<<"khong co "<<x<<" trong mang."<<endl;
    sapxep(a,n);
    xuat(a,n);
    cout<<(timkiemnhiphan(a,n,0,n-1,2));
    return 0;
}
void nhap(int a[], int &n)
{
    cout<<"n = ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
void xuat(int a[], int n)
{
    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"]: "<<a[i]<<endl;

    }
}
bool find(int a[], int n, int x)
{
    bool test = false;
    for(int i = 0; i < n; i++)
    {
        if(a[i]==x) return true;
    }
    return test;
}
void sapxep(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int timkiemnhiphan(int a[], int n, int left, int right, int x)
{
    //b1: sap xep
    // sapxep(a,n);
    //b2: tim kiem
    int mid = left + (left + right)/2;
    if(a[mid]==x) return mid;
    else if(a[mid]<x) {return timkiemnhiphan(a,n,mid+1,right,x);}
    else if(a[mid]>x){return timkiemnhiphan(a,n,0,mid-1,x);}
    return -1;
}