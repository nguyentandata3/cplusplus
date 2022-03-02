// id, name, salary
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class employee
{
    private:
        int id;
        string name;
        int salary;
    public:
        employee(); //ham mac dinh
        employee(int id, string name, int salary); //ham co tham so
        void nhap();
        void xuat();
        void setid(int id)
        {
            this->id = id;
        };
        int getid()
        {
            return id;
        };
        void setname(string name)
        {
            this->name = name;
        };
        string getname()
        {
            return name;
        };
        void setsalary(int salary)
        {
            this->salary = salary;
        };
        int getsalary()
        {
            return salary;
        };


};
class employees
{
    private:
        vector<employee> danhsach;// vector 
    public:
        void nhapnv(int soluong)
        {
            for(int i = 0; i < soluong; i++)
            {
                employee nhanvien;
                nhanvien.nhap();
                this->danhsach.push_back(nhanvien);
            }
        };
        void themNV(employee nvthem)
        {
            this->danhsach.push_back(nvthem);
        };
        void xuatnv(int soluong)
        {
            cout<<"thong tin nv: "<<endl;
            for(int i = 0; i < soluong; i++)
            {

               this->danhsach[i].xuat();
            }
        };
        int getSize(){
            return danhsach.size();
        }
        bool timNV(int id)
        {
            bool find = false;
            for(int i = 0; i < danhsach.size(); i++)
            {
                if(danhsach[i].getid()==id)
                {
                    find = true;
                    break;
                }
            }
            return find;
        };
        employee getNhanVien(int id){
            employee result;
            for (int i = 0; i < danhsach.size(); i++)
            {
                if(danhsach[i].getid()==id)
                {
                    result = danhsach[i];
                    break;
                }
            }
            return result;
        }
        employees findsalary(int salary)
        {
            employees result;
            for(int i = 0; i < danhsach.size(); i++)
            {
                if (danhsach[i].getsalary()==salary)
                {
                    // TODO: them nhan vien
                    result.themNV(danhsach[i]);
                }
            }
            return result;
        };
};
int main()
{
    employees nv,timluong;
    int n,id,salary;
    employee employee;
    cout<<"ban muon nhap bao nhieu nv: ";
    cin>>n;
    nv.nhapnv(n);
    nv.xuatnv(n);
    cout<<"id muon tim: ";
    cin>>id;
    cout<<"salary: ";
    cin>>salary;
    if(!nv.timNV(id)) cout<<"ID "<<id<<" Khong co trong danh sach."<<endl;
    else
    {
        //TODO:in ra 1 nhan vien
        nv.getNhanVien(id).xuat();
    }
    timluong=nv.findsalary(salary);
    timluong.xuatnv(timluong.getSize());
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
    this->id = 0;
    this->name = "error";
    this->salary = 0;
}
employee::employee(int id, string name, int salary)
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