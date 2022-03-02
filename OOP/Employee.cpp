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
        void xuat();
};
class employees
{
    private:
        vector<employee> nhanvien; 
    public:
        void nhapnv(int soluong)
        {
            for(int i = 0; i < soluong; i++)
            {
                employee nhanvien;
                nhanvien.nhap();
                this->nhanvien.push_back(nhanvien);
            }
        };
        void xuatnv(int soluong)
        {
            for(int i = 0; i < soluong; i++)
            {
               cout<<"thong tin nv thu ["<<i+1<<"]: "<<endl;
               this->nhanvien[i].xuat();
            }
        };
};
int main()
{
    employees nv;
    int n;
    employee employee;
    cout<<"ban muon nhap bao nhieu nv: ";
    cin>>n;
    nv.nhapnv(n);
    nv.xuatnv(n);
    // for(int i = 0; i < n;i++)
    // {
    //     cout<<"nv thu ["<<i<<"]: "<<endl;
    //     employee.nhap();
    //     nv.push_back(employee);
    //     cout<<endl;
       
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<"thong tin nv thu ["<<i+1<<"]: "<<endl;
    //     nv[i].xuat();
    // }
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
        cout<<"id: ";
        cin>>id;
        cout<<"name: ";
        cin>>name;
        cout<<"salary: ";
        cin>>salary;
}
void employee::xuat()
{
    this->name = name;
    this->id = id;
    this->salary = salary;
    cout<<"Id: "<<id<<"     Name: "<<name<<"       Salary: "<<salary<<endl;
}