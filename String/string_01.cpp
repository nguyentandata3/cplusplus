#include <sstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ostringstream ss;
    // Minh anh Nam Dung Hoang
    string name1 = "Minh";
    string name2 = "anh";
    string name3 = "Dung";
    ss <<name1 <<" "<<name2<<" " <<name3;
    const string result = ss.str();
    cout<<ss.str();
}