#include <iostream>
using namespace std;
int main()
{
    int hang,cot;
    cout<<"ngang: ";
    cin>>hang;
    cout<<"doc: ";
    cin>>cot;
    for(int i = 0; i < hang; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}