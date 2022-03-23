#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,int> mymap;
    mymap[2000] = 100;
    mymap[5000] = 200;
    mymap[10000] = 300;
    int tong = 0;
    for(map<int,int>::iterator i = mymap.begin(); i != mymap.end(); i++)
    {
        tong += i->first * i->second;
        cout<<i->first<<": "<<i->second<<endl;
    }
    cout<<"tong = "<<tong;
    return 0;
}