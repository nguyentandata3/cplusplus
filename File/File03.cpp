#include <iostream>
#include <fstream>
using namespace std;
#define MAX 50
int main()
{
    string filename = "IO/3.in";
    string a[MAX];
    int n;
    bool test = false;
    // cout<<"File name: ";
    // cin>>filename;
    ifstream ifs(filename);
    ofstream ofs("IO/3.out");
    ifs>>n;
    //doc file
    for(int i = 0; i < n; i++)
    {
        ifs>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //dong file
    ifs.close();
    for(int i = 0; i < n; i++)
    {
        if(a[i]=="Chemistry")
        {
            test = true;;
            break;
        }
    }
    if (test==true) ofs<<"YES";
    else ofs<<"NO";
    ofs.close();
    return 0;
}