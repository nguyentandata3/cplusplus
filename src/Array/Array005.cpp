// nhap 2 mang
// cong 2 mang
// tim phan tu trung nhau
// tim phan tu co trong mang a va k co trong mang b
#include <iostream>
using namespace std;
#define MAX 50
void nhap(int mang[], int soluong);
void xuat(int mang[], int soluong);
void congMang(int a[], int m, int b[], int n, int c[], int &k);
void timtrungnhau(int a[], int m, int b[], int n, int d[], int &q);
bool tontai(int a[],int n, int x);
int main()
{
    int a[MAX], b[MAX];
    int c[MAX], d[MAX];
    int n1,n2,k,q = 0, x;

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
    cout<<"sau khi cong mang: ";
    congMang(a,n1,b,n2,c,k);
    xuat(c,k);
    cout<<"phan tu trung nhau: ";
    timtrungnhau(a,n1,b,n2,d,q);
    xuat(d,q);
    cout<<"co trong mang a va khong co trong mang b:";
    for(int i=0;i<n1;i++){
        if(!tontai(b,n2,a[i])){
            cout<<a[i];   
        }
    }
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
// 1 2 3
// 4 5 6
// 1 2 3 4 5 6
void congMang(int a[], int m, int b[], int n, int c[], int &k){
    // so luong
    k = m+n;
    int j = 0;
    // danh sach phan tu
    for(int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for(int i = m; i < k; i++)
    {
        c[i] = b[j];
        j++; 
    }
}
// a: 3 2 3 4
// b: 1 2 3 3
// c: 2 3
void timtrungnhau(int a[], int m, int b[], int n, int d[], int &q)
{
    q = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (a[i]==b[j])
            {
                d[q] = b[j];
                q++;
                break;
               
            }
        }
    }
    // sap xep
    // a[i] = a[i+1]
}
// 1 2 3 4
// x = 6
bool tontai(int a[],int n, int x){
    bool test = false;
    for(int i = 0; i < n; i++)
    {
        if(a[i]==x)
        {
             test = true;
             break;
        }
    }
    return test;
}