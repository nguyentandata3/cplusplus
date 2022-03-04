#include<iostream>
#include<vector>
#include<cmath>
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
        void setx(int x)
        {
            this->x = x;
        };
        int getx()
        {
            return x;
        };
        void sety(int y)
        {
            this-> y = y;
        };
        int gety()
        {
            return y;
        };
        void xuat();
};
class Line{
    private:
        Point first, second;
    public:
        Line();
        Line(Point first, Point second);
        float length();
};
class LineList{
    private:
        vector<Line> lines;
    public:
        void addLine(Line line);
        void print();
};
int main(){
    Point point;
    LineList lines;
    Point A(3,4), B(2,3),C(4,2);
    Line AB(A,B),AC(A,C),BC(B,C);
    lines.addLine(AB);
    lines.addLine(AC);
    lines.addLine(BC);
    lines.print();
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
Line::Line(){   
}
Line::Line(Point first,Point second){
    this->first = first;
    this->second = second;
}
float Line::length(){
    return sqrt(pow(second.getx()-first.getx(),2) + (pow(second.gety()-first.gety(),2)));
}
void LineList::addLine(Line line){
    this->lines.push_back(line);
}
void LineList::print(){
    for(int i=0; i<lines.size();i++){
        cout<<lines[i].length()<<" ";
    }
}