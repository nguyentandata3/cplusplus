//size
//elements
//push(), pop(), empty(), full().
#include <iostream>
using namespace std;
class Stack
{
    private:
        int size;
        int elements[10];
        const int MAX_SIZE = 10;
    public:
        Stack();
        void push(int element);
        void pop();
        void print();
};
int main()
{
    Stack stack;
    stack.push(1);
    stack.push(4);
    stack.push(3);
    stack.push(9);
    stack.push(10);
    stack.print();
    return 0;
}
Stack::Stack()
{
    size = 0;
}
void Stack::push(int element)
{
    //neu chua day
    if(size < MAX_SIZE)
    {
        size++;
        elements[size-1] = element;
    }
}
void Stack::pop()
{
    if (size > 0)
    {
        size--;
    }
}
void Stack::print()
{
    for(int i = 0; i < size; i++)
    {
        cout<<elements[i]<<" ";
    }
}
