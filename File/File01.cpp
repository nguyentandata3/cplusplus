#include<iostream>
#include<fstream>// thu vien file
#include <string>
using namespace std;
int main(){
    string path = "IO/1.in";
    string path2 = "IO/1_v.out";
    string data = "FOO";
    int a,b;
    ifstream ifs(path);// khoi tao file path de doc
    ofstream ofs(path2,std::ios::app);// khoi tao file de ghi
    // doc file
    if(ifs.is_open())
    {
        cout<<"Hello World."<<endl;      
    }
    ifs>>a>>b;
    cout<<"a: "<<a<<"b: "<<b;
    // dong file
    ifs.close();
    // xu li file 2
    ofs<<data;
    ofs.close();
    return 0;
}