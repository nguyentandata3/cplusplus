//Tính S(n) = 1 + 2 + 3 + … + n bằng C / C++
#include <iostream>
using namespace std;
int tong(int n);
int main()
{
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<"tong = "<<tong(n);
    return 0;
}
int tong(int n)
{
    int tong = 0;
    for (int i = 0; i <= n;i++)
    {
        tong+=i;
    }
    return tong;
}