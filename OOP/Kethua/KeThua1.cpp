#include <iostream>
using namespace std;
// A, B: cha --> con
class A{
    // thuoc tinh

    // phương thức
    public:
        print(){cout<<"Hello";}
};
class B:public A{
    public:
        print(){cout<<"Hi";}
};
int main(){
    A a;
    B b;
    a.print();
    b.print();
    return 0;
}