#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<"m = ";
    cin>>m;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i>=j)
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}