#include <iostream>

using namespace std;
#define MAX 100
void nhapMang(int mang[],int n);
void xuatMang(int mang[],int n);
int tanSuat(int mang[], int n, int x);
void tangdan(int mang[], int n);
void tangdanSoDuong(int mang[],int n);
void giamdangSoAm(int mang[], int n);
int main()
{
    int mang[MAX];
    int n,x;
    cout<<"n = ";
    cin>>n;
    cout<<"Ban muon kiem tra tan suat cua so: ";
    cin>>x;
    nhapMang(mang,n);
    cout<<"Truoc khi sap xep tang dan: "<<endl;
    xuatMang(mang,n);
    cout<<x<<" xuat hien "<<tanSuat(mang,n,x)<<" lan."<<endl;
    // cout<<"Sau khi sap xep theo tang dan: "<<endl;
    // tangdan(mang,n);
    // xuatMang(mang,n);
    cout<<"Sau khi sap xep theo tang dan so duong: "<<endl;
    tangdanSoDuong(mang,n);
    xuatMang(mang,n);
    cout<<"Sau khi sap xep theo giam dan so am: "<<endl;
    giamdangSoAm(mang,n);
    xuatMang(mang,n);
    return 0;
}

void nhapMang(int mang[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"("<<i+1<<") = ";
        cin>>mang[i];
    }
}
void xuatMang(int mang[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<"Phan tu ("<<i+1<<"): "<<mang[i]<<endl;
    }
}
int tanSuat(int mang[], int n, int x)
{
    int tansuat = 0;
    for (int i = 0; i < n; i++)
    {
        if (mang[i]==x) tansuat++;
    }
    return tansuat;
}
void tangdan(int mang[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (mang[i]>mang[j])
            {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
}
void tangdanSoDuong(int mang[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (mang[i]>mang[j] && mang[i] > 0 && mang[j] > 0)
            {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
}
void giamdangSoAm(int mang[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (mang[i]<mang[j] && mang[i] < 0 && mang[j] < 0)
            {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
}

