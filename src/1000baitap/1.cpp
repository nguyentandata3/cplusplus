//Tính S(n) = 1 + 2 + 3 + … + n bằng C / C++
#include <iostream>
using namespace std;
int main()
{
    int n;
    int tong = 0;
    cout<<"n = ";
    cin>>n;
    for (int i = 0; i <= n;i++)
    {
        tong+=i;
    }
    cout<<"tong = "<<tong;
    return 0;
}