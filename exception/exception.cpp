//chia 1 so cho 0
#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 0;
    int c=0;
    try{
        if(b==0){
            throw b;
        }
        c = a/b; // không làm
    }catch(int b){
        cout<<"b = 0"<<endl;
    }
    cout<<"c = "<<c<<endl;
    return 0;
}