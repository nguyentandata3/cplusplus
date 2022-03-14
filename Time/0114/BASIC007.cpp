#include <iostream>
using namespace std;
int tinhTongCacSoCuaMang(int a[],int n);
int main()
{
    //khai bao
    int mang[50];
    int n;
    //xu ly
    cin>>n;
    cout<<tinhTongCacSoCuaMang(mang, n);
    //tra ve
    return 0;
}
int tinhTongCacSoCuaMang(int a[],int n)
{
    int tong = 0;
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
        tong +=a[i];
    }
    return tong;
}