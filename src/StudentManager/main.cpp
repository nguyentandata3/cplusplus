#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
        string id;
        string name;
    public:
        Student();
};
Student::Student(){
    this->id = "001";
    this->name = "Dat";
}

int main(){
    Student Student;
    return 0;
    }