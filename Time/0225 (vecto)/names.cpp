#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names;
    names.push_back("Minh Anh");
    names.push_back("Tuan Kiet");
    names.push_back("Tho Tho");
    names.push_back("Son");
    names.push_back("Dat"); 
    if (!names.empty())
    {
        for(string name:names)
        {
            cout<<name<<" \n";
        }
    } else cout<<"vector rong.";
    return 0;
}