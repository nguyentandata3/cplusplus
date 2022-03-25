// tối đa: O(n^2)
// chậm nhất: O(1)

// 2 6 7 0 1 3 2 6 9 1
#include <iostream>
using namespace std;

int main()
{
    int a[100] ={2, 6, 7, 0, 1, 5, 8, 9, 15};
    int n = 9, key, j;
    for(int i = 1; i < n; i++)
    {
        key = a[i]; // quân bài mình đang cầm
        j=i-1;
        //tìm và dồn sang phải vị trí thích hợp
        while(j>=0 && a[j] < key)
        {
            a[j+1] = a[j];
            j--;
        }
        //chèn
        a[j+1] = key;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}