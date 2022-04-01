#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,10> a={1,2,3,4,5,6,7,8,9,10};
    cout<<"using at(): ";
    for(int i = 0; i < 10; i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<"\n";

    cout<<"element using get(): ";
    cout<<get<0>(a)<<" "<<get<1>(a)<<" "<<"\n";
    cout<<"using operator: ";
    for(int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"using front & back: ";
    cout<<a.front()<<" "<<a.back()<<"\n";
    return 0;
}