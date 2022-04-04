#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> a;
    a["one"]=1;
    a["two"]=2;
    a["three"]=3;
    a["one"]=10;
    for(auto i=a.begin(); i!=a.end(); i++)
    {
        cout<<i->first<<": "<<i->second<<"\n";
    }
    return 0;
}