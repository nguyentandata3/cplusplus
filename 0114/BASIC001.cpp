//Nhập vào số tự nhiên n. Tìm tổng các chữ số của n.
#include <iostream>
using namespace std;
int tinhTongSoN(int n);
int main()
{
    //khai bao
    int n;
    
    //xu ly
    cin>>n;
    cout<<tinhTongSoN(n)<<endl;
    //tra ve

    return 0;
}
int tinhTongSoN(int n)
{
    int tong = 0;
    while (n/10!=0)
    {
        tong = tong + n%10;
        n/=10;
    }
    tong+=n;
    return tong;
}