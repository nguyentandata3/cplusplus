// O(n^2-ni-i) = O(n^2)
// 2 6 7 0 1 3 2 6 9 1
#include <iostream>
using namespace std;

int main()
{
    int a[100] ={2, 6, 7, 0, 1, 5, 8, 9, 15};
    int n = 9;
    bool swap = false;
    for(int i = 0; i < n-1; i++) // n
    {
        for(int j = 0; j < n-i-1; j++)// n-i-1
        {
            if(a[j] > a[j+1])
            {
                cout<<a[i]<<"?"<<a[j]<<" ";
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                cout<<a[i]<<"->"<<a[j]<<endl;
                swap = true;
            }
        }
        if(!swap){ // cải tiến tốc độ thuật toán: nếu như duyệt lần trước mà tất cả các phần tử đều được sắp xếp thì bỏ qua
            break;
        } 
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}