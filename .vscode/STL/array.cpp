#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,9> a={1,2,3,4,5,6,7,8,9};
    array<int,9> b={11,12,13,14,15,16,17,18,19};
    cout<<"using at(): ";
    for(int i = 0; i < 9; i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<"\n";

    cout<<"element using get(): ";
    cout<<get<0>(a)<<" "<<get<1>(a)<<" "<<"\n";
    cout<<"using operator: ";
    for(int i = 0; i < 9; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"using front & back: ";
    cout<<a.front()<<" "<<a.back()<<"\n";
    cout<<"using size(): "<<a.size()<<"\n";
    cout<<"using max_size(): "<<a.max_size()<<"\n";
    a.swap(b);
    cout<<"sau swap: "<<"\n";
    for(int i = 0; i < 9; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(int i = 0; i < 9; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    cout<<"using empty(): "<<a.empty()<<"\n";
    cout<<"using fill(): ";
    a.fill(0);
    for(int i = 0; i < 9; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}