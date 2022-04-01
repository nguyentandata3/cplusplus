#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> flist1;
    forward_list<int>::iterator flist2; //con trỏ. (Dùng để duyệt không phải là đối tượng)
    flist1.assign({1,2,3});
    // flist2.assign({4,5,6});
    // flist2.assign(5,10);
    cout<<"flist1: ";
    for(int &a : flist1)
    {
        cout<<a<<" ";
    }    
    cout<<"\nusing push_front() & emplace_front() & pop_front(): ";
    // flist1.push_front(50);
    // flist1.emplace_front(100);
    // flist1.pop_front();
    // for(int &a : flist1)
    // {
    //     cout<<a<<" ";
    // }
    cout<<"\nusing insert_after(): ";
    flist2 = flist1.insert_after(flist1.begin(),{4,5,6});
    for(int &a : flist1)
    {
        cout<<a<<" ";
    }
    cout<<"\nusing emplace_after(): ";
    flist2 = flist1.emplace_after(flist2,8);
    for(int &a : flist1)
    {
        cout<<a<<" ";
    }
    cout<<"\nusing erase_after(): ";
    flist2 = flist1.erase_after(flist1.begin());
    for(int &a : flist1)
    {
        cout<<a<<" ";
    }
    cout<<"\nusing remove(): ";
    flist1.remove(5);
    for(int &a : flist1)
    {
        cout<<a<<" ";
    }
    cout<<"\nusing remove_if(): ";
    flist1.remove_if([] (int x)  {return x < 6;});
    for(int &a : flist1)
    {
        cout<<a<<" ";
    }
    return 0;
}