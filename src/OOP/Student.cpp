#include <iostream>
using namespace std;
class Student
{
    //du lieu
    private:
        string id;
        string name;
        float math;
        float physical;
        float chemistry;

    //hanh vi
    public:
        void input();
        void output();
        float findGPA();
};
void Student::input()
{
    cout<<"Id: ";
    cin>>id;
    cout<<"Name: ";
    cin>>name;
    cout<<"Math: ";
    cin>>math;
    cout<<"Physical: ";
    cin>>physical;
    cout<<"Chemistry: ";
    cin>>chemistry;
}
void Student::output()
{
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Math: "<<math<<endl;
    cout<<"Physical: "<<physical<<endl;
    cout<<"Chemistry: "<<chemistry<<endl;

}
float Student::findGPA()
{
    return (math + physical + chemistry) / 3;
}
int main()
{
    Student dat;
    dat.input();
    dat.output();
    cout<<"GPA: "<<dat.findGPA();
    return 0;

}