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
    cout<<"Name: "<<id<<endl;
    cout<<"Math: "<<id<<endl;
    cout<<"Physical: "<<id<<endl;
    cout<<"Chemistry: "<<id<<endl;

}
int main()
{
    Student dat;
    dat.input();
    dat.output();
    return 0;

}