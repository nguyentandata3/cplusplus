

#include <iostream>
using namespace std;
typedef struct SinhVien
{
    string hoten;
    string gioitinh;
    int namsinh;
    float toan;
    float ly;
    float hoa;
    float gpa;
};
void nhapSV(SinhVien &sinhvien); //khai bao ham nhap sv
void xuatSV(SinhVien sinhvien); //khai bao ham xuat sv
void menu(SinhVien sinhvien);
int main()
{   
    SinhVien sinhvien;
    nhapSV(sinhvien);
    menu(sinhvien);
    //khai bao
    //xu ly
    //tra ve
    return 0;
}
void nhapSV(SinhVien &sinhvien)// xay dung ham nhap sv
{
    cout<<"Ho va ten: ";
    cin>>sinhvien.hoten;
    cout<<"Gioi tinh: ";
    cin>>sinhvien.gioitinh;
    cout<<"Nam sinh: ";
    cin>>sinhvien.namsinh;
    cout<<"Diem toan: ";
    cin>>sinhvien.toan;
    cout<<"Diem ly: ";
    cin>>sinhvien.ly;
    cout<<"Diem hoa: ";
    cin>>sinhvien.hoa;
    sinhvien.gpa = (sinhvien.toan + sinhvien.ly + sinhvien.hoa) / 3;
}
void xuatSV(SinhVien sinhvien) //xay dung ham xuat sv
{
    cout<<"Ho va ten: "<<sinhvien.hoten<<endl;
    cout<<"Gioi tinh: "<<sinhvien.gioitinh<<endl;
    cout<<"Nam sinh: "<<sinhvien.namsinh<<endl;
    cout<<"GPA = "<<sinhvien.gpa<<endl;
}
void menu(SinhVien sinhvien)
{
    int select;
    do
    { 
        cout<<"----------Moi lua chon----------"<<endl;
        cout<<"1. Nhap lai thong tin sinh vien"<<endl;
        cout<<"2. Xuat thong tin sinh vien"<<endl;
        cout<<"3. ...";
        cin>>select;
        switch(select)
        {
            case 1:
            {
                nhapSV(sinhvien);
                break;
            }
            case 2:
            {
                xuatSV(sinhvien);
                break;
            }
            case 3:
            {
                cout<<"...."<<endl;
                break;
            }
            default:
            {
                cout<<"Nhap sai."<<endl;
                break;
            }
        }
        cout<<"Nhap 1 de thoat. Nhap 2 de tiep tuc chuong trinh."<<endl;
        cin>>select;
    } while (select!=1);
}
