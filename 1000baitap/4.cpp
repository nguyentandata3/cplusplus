//Tính S(n) = 1/2 + 1/4 + … + 1/2n bằng C / C++
#include <iostream>
using namespace std;
float tinhTong(int n);


int main()
{
    int n;
    float tong = 0;

    //nhap lieu
    cout<<"n = ";
    cin>>n;
    cout<<"s = "<<tinhTong(n);
    return 0;
}
float tinhTong(int n)
{
    float tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong = tong + ((1.0/(2*i)));
    }
    return tong;
}
