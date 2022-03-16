#include <iostream>
#define FOR(i,a,b) for(long long i = a; i < b; i++)
using namespace std;

int main()
{
    int *a; //a rỗng: mảng động
    int i, n = 10;
    a = new int[n];// kích thước tối đa 10 phần tử
    //nhap danh sach phan tu
    FOR(i,0,n)
    {
        cin>>a[i];
    }
    FOR(i,0,n)
    {
        cout<<a[i]<<" ";
    }
}