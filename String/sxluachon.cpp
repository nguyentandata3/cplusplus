
// 2 6 7 0 1 3 2 6 9 1
#include <iostream>
using namespace std;

int main()
{
    int a[100] ={2, 6, 7, 0, 1, 5, 8, 9, 15};
    int n = 9, min, dem = 0;;
    for(int i = 0; i < n-1; i++)
    {
        // tìm min từ i -> n
        min = i;
        for(int j = i+1; j < n; j++)
        {
            dem++;
            if (a[j] < a[min]) min = j;
        }  
        //   nếu mà vị trí min trùng với vị trí i
        if (min != i)
        {
            int temp=a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    cout<<"xuat mang: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<dem<<endl;
    return 0;
}