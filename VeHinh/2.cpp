#include <iostream>
using namespace std;
//* * * *
// * * *
//* * * *
// * * *
//m = 4, n = 4
int main()
{
    int hang,cot;
    cout<<"hang: ";
    cin>>hang;
    cout<<"doc: ";
    cin>>cot;
    for(int i = 0; i < hang; i++)
    {
        if(i%2==0)
        {
           for(int j = 0; j < cot; j++)
           cout<<"* ";
        }
        else 
        {
            for(int j = 0; j < cot -1; j++)
            {
                cout<<" *";
            }
        }
        cout<<endl;

    }
    return 0;
}