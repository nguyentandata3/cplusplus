//Nhập vào một số tự nhiên n và tính tổng các chữ sô chẵn của số đó.
#include <iostream>
#include <cmath>
using namespace std;
int tinhTongSoChan(int n,int x);
int main()
{
    //khai bao
    int n,x;
    //xu ly
    cin>>n;
    x = n;
    cout<<tinhTongSoChan(n,x);
    //tra ve
    return 0;
}
int tinhTongSoChan(int n,int x)

{
    int tong = 0;
    while (n/10!=0)
    {
        if (n%2==0)
        {
        tong+=n%10;
        }
        n/=10;
    }
    return tong;
}