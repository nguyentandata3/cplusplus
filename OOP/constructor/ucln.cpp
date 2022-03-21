// 5 8 --> USCLN cua a,b
// 5 -> 2
#include <iostream>
using namespace std;
int ucln(int a, int b)
{
    int ketqua = 1;
    //tim so nho hon
    int min = (a>b)?b:a;//toan tu dieu kien
    //tim usc
    for(int i = min; i > 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            ketqua = i;
            break;
        }
    }
    return ketqua;
}
int main()
{
    int a = 10, b = 15;
    cout<<"ucln: "<<ucln(a,b)<<endl;
    return 0;
}