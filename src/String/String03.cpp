// cho 1 chuỗi
// - tìm chiều dài
// - tìm kí tự thứ i
// - in ra chuỗi đảo ngược
// - in ra các kí tự là số
// - kiểm tra 1 số đối xứng không?
// - kiểm tra tồn tại số chẵn không?
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string chuoi="22223";
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
    cout<<"\nKiem tra doi xung: ";
    int size = chuoi.size();
    for(int i = 0; i < size; i++){
        chuoi2+=chuoi[size-1 - i];
    }
    if(chuoi != chuoi2){
        test = false;
    }
    cout<<test;
    test = false;
    for(int i = 0; i < size; i++)
    {
        if(isdigit(chuoi[i]) != 0)
        {
            if ((chuoi[i] - '0')%2 == 0) // '9' - '0' = 9
            {
                test = true;
                break;
            }
        }
    }    
    cout<<"\nTon tai so chan: "<<test;
    test = true;
    for(int i = 0; i < size; i++)
    {         
        if((chuoi[i] - '0') %2 != 0)
        {
            test = false;
            break;
            if(isdigit(chuoi[i]) == 0)
                {
                test = false;
                break;
                }
        }
    }
    cout<<"\nChuoi toan so chan: "<<test;
    return 0;
}