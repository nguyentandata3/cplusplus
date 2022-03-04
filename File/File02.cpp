#include <iostream>
#include <fstream>
using namespace std;
#define MAX 50
int main()
{
    string filename = "IO/2.in";
    int n, tong = 0;
    int a[MAX];
    ifstream ifs(filename);//khoi tao file doc
    ofstream ofs("IO/2.out");//khoi tao file xuat
    //doc file
    ifs>>n;
    for(int i = 0; i < n; i++)
    {
        ifs>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    //dong file
    ifs.close();
    //luu du lieu vao file xuat
    for(int i = 0; i < n; i++)
    {
        tong+=a[i];
    }
    ofs<<tong;
    //dong file
    ofs.close();
    return 0;
}