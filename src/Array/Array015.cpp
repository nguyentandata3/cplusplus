// Bài 1: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất
// Bài 2: Hãy tìm giá trị trong mảng các số thực gần giá trị x nhất
// Bài 3: Cho mảng 1 chiều các số thực, hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
// Bài 4: Cho mảng 1 chiều các số thực, hãy tìm giá trị x sao cho đoạn [-x, x] chứa tất cả các giá trị trong mảng
// Bài 5: Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị 2003. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về  -1
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define MAX 10
void sort(float a[]);
float xanhat(float a[], float x);
float gannhat(float a[], float x);
void xuat(float a[], int n);
void doanab(float a[], float c, float b);
int main()
{
    float a[MAX]={6,-3,7,-8,3,-11,35,88,-45,29};
    float x;   
    cout<<"x = ";
    cin>>x;
    sort(a); 
    xuat(a,10);
    cout<<"So xa nhat: ";
    if(xanhat(a,x) == 0) cout<<a[0]<<" va "<<a[9];
    else cout<<xanhat(a,x)<<"\n";
    cout<<"So gan nhat: "<<gannhat(a,x);
    doanab(a,0,30);
    return 0;
}
void sort(float a[])
{
    sort(a, a + 10);
}
float xanhat(float a[], float x)
{
    float max = a[0];
    sort(a,a + 10);
    if (x > a[9] || abs(x - a[0]) > abs(x - a[9]))
    {
        max = a[0];
    }
    else if (x < a[0] || abs(x - a[0]) < abs(x - a[9]))
    {
        max = a[9];
    }
    else if(abs(x - a[0]) == abs(x - a[9])) return 0;
    return max;
}
float gannhat(float a[], float x)
{
    float min = x - a[0];
    float b = a[0];
    for(int i = 0; i < 10; i++)
    {
        if(abs(a[i] - x) < min)
        {
            min = abs(a[i] - x);
            b = a[i];
        }
    }
    return b;
}
void xuat(float a[])
{
    for(int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void doanab(float a[], float c, float b)
{
    // float max = c - a[0];
    // float min = b - a[0];
    // float e,f;
    // for(int i = 0; i < 10; i++)
    // {
    //     if(abs(c-a[i]) > max)
    //     {
    //         max = c - a[i];
    //         e = a[i];
    //     }
    //     if(abs(b-a[i]) < min)
    //     {
    //         min = b - a[i];
    //         f = a[i];
    //     }
    // }
    // for(int i = 0; i < 10; i++)
    // {
    //     if(a[i] > f || a[i] < e)
    //     {
    //         cout<<a[i]<<" ";
    //     }
    // }
    // cout<<endl;
}

// 10 2 1 -2 3 -5
// x = -3
// abs(a[i]-x) max