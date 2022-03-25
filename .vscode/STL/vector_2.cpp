#include <iostream>
#include <vector>
using namespace std;
void xuat(vector<string> a)
{
    // 0x342323 0x34234 .... 
    for(vector<string>::iterator i = a.begin(); i < a.end();i++)// địa chỉ phần tử đâu
    {
        cout<<*i<<" ";
    }
}
int main()
{
    vector<int> a;
    vector<string> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    b.push_back("a");
    b.push_back("xcv");
    b.push_back("qwe");
    for(vector<int>::reverse_iterator i = a.rbegin(); i != /*<*/ a.rend(); i++)
    {
        cout<<*i<<" ";
    }
    // xuat(b);
    // xuat(a);
    return 0;
}