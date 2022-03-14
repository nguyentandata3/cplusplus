// 1 2 3
// 5 --> 5 4 1 2 3
//push, front, pop, empty, full
#include <iostream>
using namespace std;
class Queue
{
    private:
        int size;
        int elements[10];
        const int MAX_SIZE = 10;
    public: 
        Queue();
        void push(int element);
        void pop();
        bool empty();
        bool full();
        int front();
        void print();
};
Queue::Queue()
{
    size = 0;
}
void Queue::push(int element)
{
    size++;
    if(size < MAX_SIZE)
    {
        for(int i = size-1; i >= 0; i--)
        {
            elements[i] = elements[i-1];
        }
    }
    if (size < MAX_SIZE)
    {     
        elements[0] = element;
    }
}
void Queue::pop()
{
    size--;
}
bool Queue::empty()
{
    return size == 0;
}
bool Queue::full()
{
    return size == MAX_SIZE;
}
int Queue::front()
{
    return elements[0];
}
void Queue::print()
{
    for(int i = 0; i < size; i++)
    {
        cout<<elements[i]<<" ";
    }
}
int main()
{
    Queue list;
    list.push(3);
    list.push(5);
    list.push(10);
    list.push(25);
    list.push(31);
    list.push(14);
    list.pop();
    list.print();
    cout<<"empty: "<<list.empty()<<endl;
    cout<<"full: "<<list.full()<<endl;
    return 0;
}