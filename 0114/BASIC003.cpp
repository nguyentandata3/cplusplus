//Đếm số lượng chữ số chẵn của số tự nhiên n.
#include <iostream>
using namespace std;
int demSoLuongSoChan(int n);
int main()
{
    //khai bao
    int n;
    //xu ly
    cin>>n;
    cout<<demSoLuongSoChan(n);
    //tra ve
    return 0;
}
int demSoLuongSoChan(int n)
{
    int dem = 0;
    while (n!=0)
    {
        if(n%2==0)
        {
            dem++;
        }
        n/=10;
    }
    return dem;
}