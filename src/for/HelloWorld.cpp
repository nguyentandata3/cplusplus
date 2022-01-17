//tinh tong so chan
//tinh tong cac so le
//thu vien
#include <iostream>
using namespace std;
//ham
int tinhTong(int a);
int tinhTongSoLe(int b);
int tinhTongSoChan(int m);
int main(){
    //khai bao
    int n;
    //xu ly
    cin>>n;
    cout<<tinhTongSoChan(n)<<endl;
    cout<<tinhTong(n)<<endl;
    cout<<tinhTong(n) - tinhTongSoChan(n);
    //tra ve
    return 5;
}
int tinhTongSoChan(int m)
{
    int tong = 0;
    while(m!=0){
        if(m%2==0){
            tong = tong + m%10;
        }
        m/=10;
    }
    return tong;
}
int tinhTong(int a)
{
    int tong = 0;
    int dem = 0;
    while(a!=0){
        tong = tong + a%10;
        a/=10;
    }
    return tong;
}
