//Cho 1 số tự nhiên n, kiểm tra xem số đó có phải là số đối xứng hay không?
#include <iostream>
using namespace std;
bool kiemtraSoDoiXung(int n);
int main()
{
    //khai bao
    int n;
    //xu ly
    cin>>n;
    if(kiemtraSoDoiXung(n)==0)
    {
        cout<<"FALSE";
    }else cout<<"TRUE";
    return 0;
}
bool kiemtraSoDoiXung(int n)
{
    int x = n;
    bool test = false;
    int sodoixung = 0;
    while (n!=0)
    {
        sodoixung = sodoixung*10 + n%10;
        n/=10;
    }
    return x==sodoixung;
}