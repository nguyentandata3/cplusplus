#include <iostream>
#include <math.h>
using namespace std;
double solution2(int n);
int main()
{
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<"tong = "<<solution2(n);
    return 0;
}
double solution2(int n)
{
    double tong = 0;
    for(int i = 1; i <= n;i++)
    {
        tong+=pow(i,2);
    }
    return tong;
}