// nhập đến khi nhập chữ thì dừng lại
// 3 4 5 6 7 6 a 4 3 2
#include<iostream>
using namespace std;
int main(){
    int a[1000];
    int n;
    int i = 0;
    int temp;
    while(cin>>temp){
        a[i] = temp;
        i++;
    }
    n = i;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}