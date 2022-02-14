// char a[] = {'a','b','c'};
// string a = "abc"; // chuoi ki tu
// char a[] = "abc"; // mang ki tu
#include<iostream>
using namespace std;
int main(){
    string str1 = "abn";
    string str2 = "abf";
    cout<<str1[2];//c
    if(str1>str2){
        cout<<"str1 > str2";
    } else{
        cout<<"str1<=str2";
    }

    return 0;
}