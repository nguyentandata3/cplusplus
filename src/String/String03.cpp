// cho 1 chuỗi
// - tìm chiều dài
// - tìm kí tự thứ i
// - in ra chuỗi đảo ngược
// - in ra các kí tự là số
// - kiểm tra 1 số đối xứng không?
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string chuoi="123321";
    string chuoi2;
    bool test = true;
    cout<<chuoi.length()<<"\n";
    cout<<"In chuoi nguoc: ";
    for(auto i = chuoi.end()-1; i >= chuoi.begin(); i--)
    {
        cout<<*i;
    }
    cout<<"\nIn ky tu so: ";
    for(auto i = chuoi.begin(); i != chuoi.end(); i++)
    {
        if(isdigit(*i)!=0)
        {
            cout<<*i<<" ";
        }
    }
    // cout<<"\nKiem tra doi xung: ";
    int size = chuoi.size();
    for(int i = 0; i < size; i++){
        chuoi2+=chuoi[size-1 - i];
    }
    cout<<chuoi2;
    if(chuoi == chuoi2){
        cout<<"Doi xung!";
    }    
    return 0;
}