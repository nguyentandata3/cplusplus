// 1 2 3 4 5
// 2 3 4 5 1
// 3 4 5 1 2
// 4 5 1 2 3
// 5 1 2 3 4
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
            if(i+j-1<=n)
            {
                cout<<i+j-1<<" ";
            }else
            {
                cout<<i+j-1-n<<" ";
            }
        }
        cout<<endl;
    }
    //tra ve
    return 0;
}