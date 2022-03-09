#include <iostream>
using namespace std;
void nhap(int a[], int &soluong);
int demSNT(int a[], int soluong);
bool testSNT(int a[], int soluong);
int main()
{
    int a[100], n;
    nhap(a,n);
    cout<<"so luong SNT be hon 100 la: "<<demSNT(a,n)<<endl;
    return 0;
}
void nhap(int a[], int &soluong)
{
    cout<<"n = ";
    cin>>soluong;
    for(int i = 0; i < soluong; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
bool testSNT(int a)
{
    bool test = true;
        if(a<=3) return true;
        else
        {
            for(int j = 2; j < a; j++)
            {
                if(a%j==0)
                {
                    test = false;
                    break;
                }
            }
        }
    return test;
}
int demSNT(int a[], int soluong)
{
    int dem = 0;
    for(int i = 0; i < soluong; i++)
    {
        if (testSNT(a[i]) != 0 && a[i] < 100)
        {
            dem++;
        }
    }
    return dem;
}