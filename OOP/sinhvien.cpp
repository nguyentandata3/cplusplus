#include <iostream>
#include <string>
using namespace std;
class Student
{
    //du lieu
    private:
        string name;
        string id;
        float gpa;
    public:
        Student(); // ham mac dinh
        Student(string name, string id, float gpa); // co tham so
        void xuat();
};
Student::Student()
{
    this->name = "error";
    this->id = "error";
    this->gpa = 0;
}
Student::Student(string name, string id, float gpa)
{
    this->name = name;
    this->id = id;
    this->gpa = gpa;
}
void Student::xuat()
{
    cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl<<"GPA: "<<gpa<<endl;
}
int main()
{
    Student sv1;
    Student sv2("Hoang Hieu","ABC123",8.5);
    sv1.xuat();
    sv2.xuat();
    return 0;
}