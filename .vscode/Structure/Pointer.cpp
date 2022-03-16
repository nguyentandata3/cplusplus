#include <iostream>
using namespace std;
int main()
{
    //pointer
    int *a; //a chua dia chi (1 bien: chua 1 dia chi)
    int b;//b chua gia tri
    a = &b; //a lay dia chi cua b
    b = 3;
    b = 7;
    cout<<*a<<endl;//lay gia tri a
    return 0;
}