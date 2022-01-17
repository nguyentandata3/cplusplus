// 1 2 3 4 5
// 2 0 0 0 4
// 3 0 0 0 3
// 4 0 0 0 2
// 5 4 3 2 1
#include <iostream>
using namespace std;
int main()
{
    //khai bao
    int n;
    //xu ly
    cout<<"n = ";
    cin>>n;
    for (int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            if(i==1)
            {
                cout<<j<<" ";
            }
            else if(i==n)
            {
                cout<<n - j + 1<<" ";
            }
            else
            {
                if (j == 1)
                {
                    cout<<i<<" ";
                }else if (j==n)
                {
                    cout<<n-i+1<<" ";
                }else
                {
                    cout<<"0 ";
                }
               
            }
            
        }
        cout<<endl;

    }
    cout<<endl;
    //tra ve
    return 0;
}