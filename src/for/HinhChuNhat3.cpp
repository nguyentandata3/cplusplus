// 0 0 0 0 1
// 0 0 0 1 0
// 0 0 1 0 0
// 0 1 0 0 0
// 1 0 0 0 0
#include <iostream>
using namespace std;
void inHCN1(int n);
void inHCN2(int n);
int main()
{
    //khai bao
    int n;
    //xu ly
    cout<<"n = ";
    cin>>n;
    inHCN1(n);
    cout<<"------------------"<<endl;
    inHCN2(n);
    return 0;
}
void inHCN1(int n)
{
    for (int i = 1;i <= n;i++)
    {
        for (int j =1;j <= n;j++)
        {
            if(i+j==n+1)
            {
                cout<<"1 ";
            }else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
void inHCN2(int n)
{
        for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            if (i==j)
            {
                cout<<"1 ";
            }else cout<<"0 ";
        }
        cout<<endl;
    }
}