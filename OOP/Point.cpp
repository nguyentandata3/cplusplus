#include<iostream>
#include<vector>
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
    vector<Point> points;
    points.push_back(Point(2,3));
    points.push_back(Point(3,5));
    points.push_back(Point(7,8));
    for(int i = 0; i < points.size();i++)
    {
        points[i].xuat();
    }
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