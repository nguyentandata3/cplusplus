#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> a)
{
    while(!a.empty())
        {
            cout<<" "<<a.top();
            a.pop();
        }
}
int main()
{
    stack<int> a;
    a.push(3);
    a.push(5);
    a.push(9);
    a.push(85);
    a.push(12);
    print(a);
    return 0;
}