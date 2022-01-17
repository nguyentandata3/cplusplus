#include <iostream>
using namespace std;
bool laSoDoiXung(int n);
void nhapMang(int a[],int &n);
void inMang(int a[], int n);
void inMangChan(int a[], int n);
void inMangLe(int a[],int n);
bool tontaiGiaTri(int a[],int n,int x);
int timMax(int a[],int n);
int timMin(int a[],int n);
int demSoDoiXung(int a[],int n);
void lietkeSoDoiXung(int a[],int n);
void lietkeViTri(int a[],int n, int x);

int main(){
    int mang[50];
    int n;
    int x;
    int max;
    nhapMang(mang,n);
    cout<<endl;
    inMang(mang,n);
    cout<<endl;
    lietkeSoDoiXung(mang,n);
    cout<<endl;
    cout<<demSoDoiXung(mang,n);
    return 0;
}
void nhapMang(int a[],int &n)
{
    cout<<"n = ";
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cout<<"a["<<i+1<<"] = ";
        cin>>a[i];
    }
}
void inMang(int a[], int n)
{
    for (int i = 0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void inMangChan(int a[], int n)
{
    for (int i = 0;i < n;i++)
    {

        if (a[i]%2==0)
        {
            cout<<a[i]<<" ";
        }
    }
}
void inMangLe(int a[],int n)
{
    for (int i = 0;i < n;i++)
    {  
        if (a[i]%2!=0)
        {
            cout<<a[i]<<" "; //in so le
        }
    }
}
bool tontaiGiaTri(int a[],int n,int x)
{
    bool ketqua = false;
    for (int i = 0;i < n;i++)
    {
        if (a[i]==x)
        {
            ketqua = true;
            break;
        }
    }
    return ketqua;
}
int timMax(int a[],int n)
{
    int max = a[0];// dat  moc
    for (int i = 1;i < n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
}
int timMin(int a[],int n)
{
    int min = a[0];
    for (int i = 1;i < n;i++)
    {
        if (a[i]<min)   min = a[i];
          
    }
    return min;
}
void lietkeViTri(int a[],int n, int x)
{
    cout<<"vi tri: ";
    for(int i = 0;i < n;i++)
    {
        if (a[i]==x)
        {
            cout<<i+1<<" ";
        }
    }
}
bool laSoDoiXung(int n)
{
    int sodaonguoc = 0;
    int m  = n;
    while (n!=0)// 3456
    {
        sodaonguoc = n%10 + sodaonguoc*10;
        n/=10;
    }
    return sodaonguoc==m;
}
void lietkeSoDoiXung(int a[],int n)
{

    for(int i = 0;i < n;i++)
    {
        if(laSoDoiXung(a[i])){
            cout<<i+1<<" ";
        }
    }
}
int demSoDoiXung(int a[],int n)
{
    int dem = 0;
    for(int i = 0;i < n;i++)
    {
        if (laSoDoiXung(a[i])){
            dem+=1;
        }
    }
    return dem;
}