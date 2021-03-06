#include <iostream>
using namespace std;
// ngay1 va ngay2
typedef struct Date //khai bao kieu du lieu tu tao Date
{
    int day;
    int month;
    int year;
};
void menu(Date date);
void nhapDate(Date &date); //khai bao ham nhap
void xuatDate(Date date,string format); //khai bao ham xuat
Date timNgayTiepTheo(Date current);// khai bao ham tim ngay tiep theo
bool testNgayTrungNhau(Date ngay1, Date ngay2);
int soSanh(Date date1, Date date2);
void hoanVi(Date &date1, Date &date2);
// voi setDate(int day,int month,)
int main()
{
    //khai bao
    Date first,second;
    //xu ly
    nhapDate(first); //goi ham nhap ngay
    menu(first);
    //tra ve
    return 0;
}
void nhapDate(Date &date) // xay dung ham nhap
{
    cout<<"Nhap ngay: ";
    cin>>date.day;
    cout<<"Nhap thang: ";
    cin>>date.month;
    cout<<"Nhap nam: ";
    cin>>date.year;
}
void xuatDate(Date date, string format) //xay dung ham xuat
{
    cout<<endl<<date.day<<format<<date.month<<format<<date.year<<endl;
}
Date timNgayTiepTheo(Date current){
    Date next;
   // xu li
    switch (current.month)
    {
    case 4: case 6: case 9: case 11:
        // xu li
        if(current.day<30){
            next.day = current.day + 1;
            next.month = current.month;
            next.year = current.year;
        }
        else{
            next.day = 1;
            next.month = current.month + 1;
            next.year = current.year;
        }
        break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        // xu li
        if(current.day<31){
            next.day = current.day + 1;
            next.month = current.month;
            next.year = current.year;
        }
        else if (current.month==12)
        {
            next.day = 1;
            next.month = 1;
            next.year = current.year + 1;
        }
        else
        {
            next.day = 1;
            next.month = current.month + 1;
            next.year = current.year;
        }
        break;
    case 2:
        // xu li
        if (current.year%4==0)
        {
            if (current.day < 29)
            {
                next.day = current.day + 1;
                next.month = current.month;
                next.year = current.year;
            }
            else 
            {
                next.day = 1;
                next.month = current.month + 1;
                next.year = current.year;
            }
        }
        else
        {
            if (current.day < 28)
            {
                next.day = current.day + 1;
                next.month = current.month;
                next.year = current.year;
            }
            else 
            {
                next.day = 1;
                next.month = current.month + 1;
                next.year = current.year;
            }
        }
        break;    
    default: 
        cout<<"Thoi gian khong hop le.";
        break;
    }
    return next;
}
void menu(Date date){
    int luachon;
    do{
        // hien thi menu
        cout<<"-------------Menu-------------"<<endl;
        cout<<"1. nhap lai."<<endl;
        cout<<"2. xuat thoi gian."<<endl;
        cout<<"3. xuat ngay tiep theo."<<endl;
        cout<<"4. Kiem tra ngay trung nhau."<<endl;
        cout<<"5. hoan vi 2 ngay."<<endl;
        // nhap lua chon
        cout<<"lua chon cua ban: ";
        cin>>luachon;
        // xet lua chon
        switch (luachon)
        {
            case 1:
            {
                nhapDate(date);
                break;
            }
            case 2:
            {
                string format = "-";
                xuatDate(date,format);
                break;
            }
            case 3:
            {
                string format = "-";
                xuatDate(timNgayTiepTheo(date),format);
                break;
            }
            case 4:
            {
    
                if (testNgayTrungNhau(date,date)==0) cout<<"2 ngay nay khong trung nhau."<<endl;
                else cout<<"2 ngay nay trung nhau."<<endl;
            }
            case 5:
            {
                Date date2;
                string format = "-";
                nhapDate(date2);
                hoanVi(date,date2);
                xuatDate(date,format);
            }
            default:
            {
                cout<<"Nhap sai.";
                break;
            }
        }
        cout<<"Nhan phim 1 de thoat!";
        cin>>luachon;
    }while(luachon!=1);
}
bool testNgayTrungNhau(Date ngay1, Date ngay2)
{
    return    ngay1.day == ngay2.day && ngay1.month == ngay2.month && ngay1.year == ngay2.year;
}
int soSanh(Date date1, Date date2)
{
    int ketqua = 0;
    if (date1.year > date2.year) ketqua = 1;
    else if (date1.year < date2.year) ketqua = -1;
    else
    {
        if(date1.month > date2.month) ketqua = 1;
        else if(date1.month < date2.month) ketqua = -1;
        else
        {
            if(date1.day > date2.day) ketqua = 1;
            else if (date1.day < date2.day) ketqua = -1;
        }
    }
    return ketqua;
}
void hoanVi(Date &date1, Date &date2)
{
    Date temp = date1;
    date1 = date2;
    date2 = temp;
}