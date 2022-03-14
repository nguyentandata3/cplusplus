//kiểm tra xem có tồn tại một chữ số trong số tự nhiên n là số chẵn hay không?
#include <iostream>
using namespace std;
bool kiemtraSoChan(int n);
int main()
{
    //khai bao
    int n;
    //xu ly
    cin>>n;
    if(kiemtraSoChan(n))
    {
        
        cout<<"TRUE";
    }else cout<<"FALSE";
    //tra ve
    return 0;
}
bool kiemtraSoChan(int n)
{
    bool test = false;
    while (n!=0)
    {
        if (n%2==0)
        {
            test = true;
            break;
        }
        n/=10;
    }
    return test;
}