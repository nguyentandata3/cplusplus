// k bộ test
// k = 3
// tìm max min
#include<iostream>
using namespace std;
void nhap(int a[],int &n);
void xuat(int a[],int n);
int main(){
    int k;
    int a[100];
    int n;
    cin>>k;// k=3
    while(k--){
        nhap(a,n);
        xuat(a,n);
    }
    return 0;
}
void nhap(int a[],int &n){
    cin>>n;// nhap n
    // nhap lan luot phan tu
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void xuat(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}