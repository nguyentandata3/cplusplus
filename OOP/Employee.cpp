// id, name, salary
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class employee
{
    private:
        string id;
        string name;
        int salary;
    public:
        employee(); //ham mac dinh
        employee(string id, string name, int salary); //ham co tham so
        void nhap();
};
int main()
{
    vector<employee> nv;
    int n;
    cout<<"ban muon nhap bao nhieu nv: ";
    cin>>n;
    for(int i = 0; i < n;i++)
    {
        cout<<"nv thu ["<<i<<"]: ";
        employee employee;
        employee.nhap();
        nv.push_back(employee);
    }
    return 0;
}
employee::employee()
{
    this->id = "error";
    this->name = "error";
    this->salary = 0;
}
employee::employee(string id, string name, int salary)
{
    this->id = id;
    this->name = name;
    this->salary = salary;
}
void employee::nhap()
{
        // cout<<"id: ";
        // cin>>id;
        cout<<"name: ";
        cin>>name;
        cout<<"salary: ";
        cin>>salary;
}