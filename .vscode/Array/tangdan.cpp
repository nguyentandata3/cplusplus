// mảng giảm dần
// cấp số cộng
// cấp số nhân
bool tangdan(int a[], int n);
bool giamdan(int a[], int n);
bool capsocong(int a[], int n);
bool capsonhan(int a[], int n);
#include <iostream>
using namespace std;
int main()
{
    int a[100] = {3,4,5,6,7,8,9,10};
    int b[100] = {1,2,4,8,16,32,64,128};
    int c[100] = {1,4,7,10,13,16,19,22,25};
    cout<<giamdan(a,8)<<" "<<capsocong(a,8)<<" "<<capsonhan(b,8)<<" "<<capsocong(c,9)<<endl;
    return 0;
}
bool tangdan(int a[], int n)
{
    bool test = true;
    for(int i = 0; i < 7; i++)
    {
        if(a[i]>a[i+1]){
            test = false;
            break;
        }
    }
    return test;
}
bool giamdan(int a[], int n)
{
    bool test = true;
    for(int i = 0; i < 7; i++)
    {
        if(a[i]<a[i+1]){
            test = false;
            break;
        }
    }
    return test;
}
bool capsonhan(int a[], int n)
{
    bool test = true;
    for(int i = 1; i < 7; i++)
    {
        if(a[i]*a[1] != a[i+1])
        {
            test = false;
            break;
        }
    }
    return test;
}
bool capsocong(int a[], int n)
{
    bool test = true;
    int socong = a[1]-a[0];
    for(int i = 1; i < 7/*n-1*/; i++)
    {
        if(a[i+1]-a[i] != socong)
        {
            test = false;         
            break;
        }
    }
    return test;
}