// thêm 1 phần tử vào mảng: a, 3 2
// xóa 1 phần tử theo index ra khỏi mảng: 2
// thay thế 1 phần tử trong mảng: index = 3, value = 4
#include <iostream>
using namespace std;
#define MAX 50
void themPhanTu(int a[],int &n, int vitri, int giatri);
void xuatMang(int a[], int n);
int main()
{
    int a[MAX] = {1,3,5,7,9,11,13,15,17,19,21};
    int n = 11, vitri, giatri;

    cout<<"Vi tri muon them: ";
    cin>>vitri;
    cout<<"Gia tri muon them: ";
    cin>>giatri;
    themPhanTu(a,n,vitri,giatri);
    xuatMang(a,n);
    return 0;
}
// 1 2 3 4
// 3 5 --> 1 2 3 5 4 //  1 2 3 _ 4              
// 0 5 --> 5 1 2 3 5 4
// 6 6 --> 5 1 2 3 5 4 6

void themPhanTu(int a[],int &n, int vitri, int giatri)
{
    n++;
   // them cuoi
    if (vitri >= n)
    {
        a[n-1] = giatri;
    }
   // them vao giua
   else
   for(int i=n;i>=vitri;i--){
       a[i] = a[i-1];
   }
    a[vitri] = giatri;
}
void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
