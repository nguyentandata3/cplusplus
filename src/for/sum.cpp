//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
//thu vien
#include <iostream>
using namespace std;
//ham
int main()
{
    //khai bao
    int n,tongn = 1;
    double s = 0;
    //xu ly
    cout<<"Nhap n: ";
    cin>>n;
    
    for(int i = 1;i<=n;i++)
    {
        tongn=tongn*i;
        s = s + tongn;
    }
    cout<<"s = "<<s;
    //tra ve
    return 0;
}