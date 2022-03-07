// - T bộ test
// - cho n đồ vật, khối lượng a[i] (float). Hỏi: số vật nhỏ nhất sao cho khi bỏ vào valy
//  và nhận được tổng khối lượng lớn nhất và chất được trong valy có thể chứa tối
// đa k kg.
#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
void sapxep(int a[], int n);
void swap(int &a,int &b);
int min(int a[], int n);
int main()
{
    int t;
    int n;
    int a[100];
    int k;
    cout<<"t = ";
    cin>>t;
    cout<<"k = ";
    cin>>k;
    while(t--)
    {
       nhap(a,n);
       sapxep(a,n);
       xuat(a,n);
        int dem = 0;
        int kl = 0;
       for(int i = 0; i < n; i++)
       {
           if(a[i]+kl <= k)
           {
               kl+=a[i];
               dem++;
           }
       }
       cout<<"so luong: "<<dem<<". khoi luong: "<<kl<<endl;
    }
    return 0;
}
void nhap(int a[], int &n)
{
    cout<<"n = ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sapxep(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        if(a[i]<a[j]) swap(a[i],a[j]);
    }
}
int min(int a[], int n)
{
    int min = a[0];
    for(int i = 0; i < n; i++)
    {
        if (min < a[i]) min = a[i];
    }
    return min;
}
