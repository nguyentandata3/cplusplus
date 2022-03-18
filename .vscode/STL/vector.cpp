// #include <vector>
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print_v1(vector<float> a);
void print_v2(vector<float> a)
{
    for(float i:a)
    {
        cout<<i<<" ";
    }
}
int main()
{
    //khai bao
    vector<float> a = vector<float>();//template in c++
    a.push_back(2.2);
    a.push_back(4);
    a.push_back(8.5);
    a.push_back(12);
    a.pop_back();
    cout<<a.size()<<"\n";
    print_v2(a);
    cout<<a.empty();
    return 0;

}
void print_v1(vector<float> a)
{
    for(int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
