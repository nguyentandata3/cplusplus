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
        void nhap();
        void setname(string name)
        {
            this->name = name;
        };
        string getname()
        {
            return name;
        };
        void setid(string id)
        {
            this->id = id;
        };
        string getid()
        {
            return id;
        };
        void setgpa(float gpa)
        {
            this->gpa = gpa;
        };
        float getgpa()
        {
            return gpa;
        };
};
Student::Student()
{
    this->name = "error";
    this->id = "error";
    this->gpa = 0;
}
void Student::nhap()
{
    cout<<"Name: ";
    cin>>name;
    cout<<"Id: ";
    cin>>id;
    cout<<"GPA: ";
    cin>>gpa;
}
Student::Student(string name, string id, float gpa)
{
    this->name = name;
    this->id = id;
    this->gpa = gpa;
}
void Student::xuat()
{
    cout<<"Name: "<<name<<" -- Id: "<<id<<" -- GPA: "<<gpa<<endl;
}
int main()
{
    Student sv1;
    Student sv2("Hoang Hieu","ABC123",8.5);
    Student sv3;
    sv1.xuat();
    sv2.xuat();
    cout<<"Nhap sv thu 3."<<endl;
    sv3.nhap();
    sv3.xuat();
    sv1.setname("Hoang");
    sv1.setid("qwe123");
    sv1.setgpa(8.5);
    
    cout<<sv1.getname()<<endl;
    cout<<sv1.getid()<<endl;
    cout<<sv1.getgpa()<<endl;
    sv1.xuat();
    return 0;
}