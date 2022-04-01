#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> flist1, flist2;
    flist1.assign({1,2,3});
    flist2.assign({4,5,6});
    flist2.assign(5,10);
    cout<<"flist1: ";
    for(int &a : flist1)
    {
        cout<<a<<" ";
    }
    cout<<"\nflist2: ";
    for(int &a : flist2)
    {
        cout<<a<<" ";
    }
    return 0;
}