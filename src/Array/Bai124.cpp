#include <iostream>
using namespace std;
void nhap(int a[], int &soluong);
bool test(int a[], int soluong);
int main()
{
    int a[100],n;
    nhap(a,n);
    if(test(a,n) == 0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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
bool test(int a[], int soluong)
{
    bool test = false;
    for(int i = 0; i < soluong; i++)
    {
        if (a[i] < 2004 && a[i] % 2 ==0)
        {
            test = true;
            break;
        }
    }
    return test;
}