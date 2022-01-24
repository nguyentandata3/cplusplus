#include <iostream>
using namespace std;

typedef struct Date //khai bao kieu du lieu tu tao Date
{
    int day;
    int month;
    int year;
};
void nhapDate(Date &date); //khai bao ham nhap
void xuatDate(Date date,string format); //khai bao ham xuat
Date ngaytieptheo(Date current); // khai bao ham ngay tiep theo
// voi setDate(int day,int month,)
int main()
{
    //khai bao
    Date first,second;
    string format = "-";
    //xu ly
    nhapDate(first); //goi ham nhap ngay
    xuatDate(first,format); //goi ham xuat ngay
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
Date ngaytieptheo(Date current)
{
    Date ketqua;
    switch (current.month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        {
            if (current.day==31)
            {
                if (current.month == 12)
                {
                    ketqua.day = 1;
                    ketqua.month = 1;
                    ketqua.year = current.year + 1;
                }
                else
                {
                    ketqua.day = 1;
                    ketqua.month = current.month + 1;
                    ketqua.year = current.year;
                }          
            }
            else
            {
                ketqua.day = current.day + 1;
                ketqua.month = current.month;
                ketqua.year = current.year;
            }
            break;
        }
        case 2:
        {
            if(current.day==28||current.day==29)
            {

            }
        }
        break;
        case 4: case 6: case 9: case 11:
        {
            if (current.day==30)
            {
                ketqua.day = 1;
                ketqua.month = current.month + 1;
                ketqua.year = current.year;
            }
            else
            {
                ketqua.day = current.day + 1;
                ketqua.month = current.month;
                ketqua.year = current.year;
            }
        }
        break;
        default:
        {
            cout<<"Thang khong hop le."
            break;
        }
    }

    return ketqua;
}