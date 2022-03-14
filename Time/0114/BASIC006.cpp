//Nhập n (n<100) và vẽ hình theo mẫu
#include <iostream>
using namespace std;
void veHCN(int n);
int main()
{
    //khai bao
    int n;
    //xu ly
    cin>>n;
    veHCN(n);
    
    //tra ve
    return 0;
}
void veHCN(int n)
{
    for(int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            if(i+j-1 <= n)
            {
                cout<<i+j-1<<" ";
            }else 
            {
                cout<<i+j-n-1<<" ";
            }
        }
        cout<<endl;
    }
    
}