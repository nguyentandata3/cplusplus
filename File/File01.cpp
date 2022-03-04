#include<iostream>
#include<fstream>// thu vien file
using namespace std;
int main(){
    string path = "IO/1.in";
    string path2 = "IO/1_v.out";
    int a,b;
    ifstream ifs(path);// khoi tao file path de doc
    ofstream ofs(path2);// khoi tao file de ghi
    // doc file
    ifs>>a>>b;
    cout<<"a: "<<a<<"b: "<<b;
    // dong file
    ifs.close();
    // xu li file 2
    ofs<<a+b;
    ofs.close();
    return 0;
}