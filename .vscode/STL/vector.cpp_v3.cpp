#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    cout<<"using push_back(): ";
    for(int i = 0; i < 5; i++)
    {
        a.push_back(i);
    }
    cout<<"\n";
    cout<<"output using begin() & end(): ";
    for(auto i = a.begin(); i != a.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";
    cout<<"output using rbegin() & rend(): ";
    for(auto i = a.rbegin(); i != a.rend(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";
    cout<<"size(): "<<a.size()<<"\n";
    cout<<"capacity(): "<<a.capacity()<<"\n";
    cout<<"max_size(): "<<a.max_size()<<"\n";
    return 0;
}