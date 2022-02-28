#include<iostream>
using namespace std;
class Point{
    // dữ liệu
    private:
        int x,y;
    // phương thức
    public:
    // khoi tao
        Point(); // mac dinh
        Point(int x, int y);// co tham so
        void xuat();
};
int main(){
    Point A;// mac dinh
    Point B(3,4);// co doi so
    Point C;
    cout<<"A";
    A.xuat();
    cout<<endl<<"B";
    B.xuat();
    return 0;
}
Point::Point(){
    this->x = 0;
    this->y = 0;
}
Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}
void Point::xuat(){
    cout<<"("<<x<<","<<y<<")";
}