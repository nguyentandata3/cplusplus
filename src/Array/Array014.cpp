#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
void sapxep(int a[], int n);
void maxtansuat(int a[], int n);
int sokhacnhau(int a[], int n);
bool daytang(int a[], int n);
bool daygiam(int a[], int n);
int dem(int a[], int n, int x);
int main()
{
    int a[100];
    int n;
    int x;
    nhap(a,n);
    // sapxep(a,n);
    xuat(a,n);
    maxtansuat(a,n);
    cout<<"Co "<<sokhacnhau(a,n)<<" so khac nhau."<<endl;
    if(daytang(a,n)==0) cout<<"Day khong phai day tang"<<endl;
    else cout<<"Day la day tang."<<endl;
    if(daygiam(a,n)==0) cout<<"Day khong phai day giam"<<endl;
    else cout<<"Day la day giam."<<endl;
    cout<<"x = ";
    cin>>x;
    if(dem(a,n,x)==0) cout<<x<<" khong xuat hien"<<endl;
    else cout<<x<<" xuat hien "<<dem(a,n,x)<<" lan."<<endl;
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
void sapxep(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void xuat(int a[], int n)
{
    int tansuat=1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[i+1])
        {
            tansuat++;
        }
        else
        {
            cout<<a[i]<<":"<<tansuat<<" ";
            tansuat=1;
        }
    }
}
void maxtansuat(int a[], int n)
{
    int max = 1, tansuat=1;
    for(int i = 0; i < n; i++)
    {
        if(a[i]==a[i+1])
        {
            tansuat++;
        }else{
            if(max < tansuat) max = tansuat;
            tansuat=1;
        }
    }
    cout<<endl<<"tan so xuat hien lon nhat: "<<max<<endl;
}
int sokhacnhau(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]!=a[i+1]) dem++;
    }
    return dem;
}
bool daytang(int a[], int n)
{   
    bool test = true;
    for(int i = 0; i < n; i++)
    {
        if(a[i]>a[i+1])
        {
            test = false;
            break;
        }
    }
    return test;
}
bool daygiam(int a[], int n)
{
    bool test = true;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < a[i+1])
        {
            test = false;
            break;
        }
    }
    return test;
}
int dem(int a[], int n, int x)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]==x) dem++;
    }
    return dem;
}