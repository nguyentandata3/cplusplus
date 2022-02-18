// 1 1 2 3 5 8 13 .....
//n = 0, fibo(0) = 1
//n = 1, fibo(1) = 1
//n = 2, fibo(2) = fibo(0) + fibo(1) = 2
//n = 3, fibo(2) = fibo(1) + fibo(2) = 3
//n    , fibo(n) = fibo(n-2) + fibo(n-1)
#include <iostream>
using namespace std;
double fibo(int n);
int main()
{
    int n = 5;
    cout<<"fibo "<<n<<" = "<<fibo(n);
    return 0;
}
double fibo(int n)
{
    //TH co so
    if (n == 0 || n == 1)
    {
       // cout<<"1 ";
        return 1;
    }
    //TH binh thuong
    return fibo(n-2) + fibo(n-1);
}