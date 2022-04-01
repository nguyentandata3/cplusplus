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
    // cout<<"using resize(): ";
    // a.resize(2);
    // cout<<a.size()<<"\n";
    cout<<"using empty(): "<<a.empty()<<"\n";
    cout<<"using shrink_to_fit(): ";
    a.shrink_to_fit();
    for(auto i = a.begin(); i != a.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";
    cout<<"insert(2,15): ";
    // cout<<"a.begin(): "<<a.begin();
    a.insert(a.begin(),15);
    for(auto i = a.begin(); i != a.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";
    cout<<"erase(a.begin()): ";
    a.erase(a.begin());
    for(auto i = a.begin(); i != a.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";
    cout<<"using clear(): ";
    a.clear();
    cout<<"a.size(): "<<a.size()<<"\n";
    return 0;
}