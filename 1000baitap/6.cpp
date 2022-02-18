// Tính S(n) = 1/(1×2) + 1/(2×3) +…+ 1/(n x (n + 1)) bằng C / C++
#include <iostream>
using namespace std;

double tinhTong(int n);
int main()
{
    int n;
    cout<<"n = ";
    cin>>n;
    cout<<"s = "<<tinhTong(n)<<endl;
    return 0;
}
double tinhTong(int n)
{
    if (n<=1) return 0.5;
    return tinhTong(n-1) + 1.0/(1.0*n*(n-1));
}