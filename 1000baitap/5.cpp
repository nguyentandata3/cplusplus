//Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n - 1) bằng C / C++
// 1 1 2 3 5 8 13 .....
//n = 1, fibo(1) = 1
//n = 2, fibo(2) = fibo(1) + 1/3 = 4/3
//n = 3, fibo(3) = fibo(2) + 1/5 = 23/15

#include <iostream>
#include <iostream>
using namespace std;
double tinhTong(int n);
int main()
{
    int n;
    cout<<"n = ";
    cin>>n;   
    cout<<"s = "<<tinhTong(n);
    return 0;
}
double tinhTong(int n)
{
    if (n<=1) return 1;
    return (tinhTong(n-1) + 1.0/(2*n-1));
}