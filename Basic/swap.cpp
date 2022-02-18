#include <iostream>
using namespace std;
void swap(int &a, int &b);
int main()
{
    int a = 3, b = 4;
    swap(a,b);
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}