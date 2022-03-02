#include <iostream>
#include <string>
#include<vector>
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
class Students{
    private: 
        vector<Student> sinhvien;
    public:
        void addstudents(Student sinhvien)
        {
            this->sinhvien.push_back(sinhvien);
        };
        // void popstudents(Student sinhvien)
        // {
        //     this->sinhvien.pop_back(sinhvien);
        // };
        void print()
        {
            for(int i = 0; i < sinhvien.size(); i++)
            {
                sinhvien[i].xuat();
            }
        };// in ra danh sach sinh vien
        bool exist(string id){
            bool result = false;
            for (int i = 0; i < sinhvien.size(); i++)
            {
                if(sinhvien[i].getid()==id){
                    result = true;
                    break;
                }
            }
            
            return result;
        };
        Student timKiemTheoId(string id){
            Student result;
              for (int i = 0; i < sinhvien.size(); i++)
            {
                if(sinhvien[i].getid()==id){
                    result = sinhvien[i];
                }
            }
            return result;
        }
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
    vector<Student> students;
    Students sinhvien;
    students.push_back(Student("Minh","001",3));
    students.push_back(Student("Anh","002",6));
    students.push_back(Student("Hoang","003",4));
    sinhvien.addstudents(students[1]);
    sinhvien.print();
    string id = "001";
    if(sinhvien.exist(id))
        sinhvien.timKiemTheoId(id).xuat();
    else cout<<"khong ton tai";
    return 0;
}