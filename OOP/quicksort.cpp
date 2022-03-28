#include <iostream>
using namespace std;
int partition(int arr[], int low, int high);
void xuat(int arr[], int n);
void sort(int arr[], int low, int high)
{
    //nếu chỉ số đầu mảng nhỏ hơn cuối mảng
    if(low < high)
    {
        //tìm chỉ số của chốt sau khi thực hiện sắp xếp
        int pi = partition(arr,low,high);// chốt
        cout<<pi<<" ";
        xuat(arr,pi);
        //lặp lại với mảng từ phẩn tử đầu đến chốt - 1
        //từ chốt + 1 đến phần tử cuối        
        sort(arr,0,pi-1);// đầu -> chốt
        sort(arr,pi+1,high);// chốt -> cuối
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// 3 1 4 2
// low = 0, hight = 3, pivot = 2, i = -1
// 1 | 3 4 2, i = 0
// 1 | 2 | 3 4
// i = 0
// 3 1 4 2 3
// (2)
// 1
// 3 4 3
// 3 3
// 4
// gom: 1 2 3 4
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];// chốt bằng cuối
    int i = low - 1;// trả về, hoán vị
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            // swap arr[i] va arr[j]
            swap(arr[i],arr[j]); 
        }
    }
    // đổi chỗ arr[i+1] và arr[high] (chốt)
    swap(arr[i+1],arr[high]);
    //tra ve chỉ số của chốt
    return i+1;
}
void xuat(int a[], int n)
{
    for(int i = 0; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[100] = {2,9,1,4,6,3,1,0,2,5,25,11,32,99,51,23,10,6};
    sort(arr,0,6);
    xuat(arr,6);
    return 0;
}