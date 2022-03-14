// append (Array) --> them
// remove (int index) --> xoa
// update (int index, int value)
// exist (int value)
//get elements
#include <iostream>
using namespace std;
class Array
{
    private:
        int size;
        int elements[10];
        const int MAX_SIZE = 10;
    public:
        Array();
        Array append(Array other);
        void push(int value);
        void pop();
        void setsize(int size) {this->size = size;}
        int getsize();
        int getelements(int index);
        void append(int value);
        void remove(int index);
        void update(int index, int value);
        bool exist(int value);
        void print();
} ;
Array::Array()
{
    size = 0;
}
Array Array::append(Array other)
{
    Array result;
    for(int i = 0; i < size; i++)
    {
        result.push(elements[i]); 
    }
    for(int i = 0; i < other.getsize(); i++)
    {
        result.push(getelements(i));
    }
    return result;
}
int Array::getsize()
{
    return size;
}
void Array::push(int value)
{
    if(size < MAX_SIZE)
    {
        size++;
        elements[size-1] = value;
    }
}
void Array::pop()
{
    size--;
}
int Array::getelements(int index)
{
    return elements[index];
}
void Array::remove(int index)
{
    for(int i = index; i < size; i++)
    {
        elements[i] = elements[i+1];
    }
    size--;
}
void Array::update(int index, int value)
{
    size++;
    for(int i = size - 1; i >= index; i--)
    {
        elements[i] = elements[i-1];
    }
    elements[index] = value;
}
bool Array::exist(int value)
{
    bool test = false;
    for(int i = 0; i < size; i++)
    {
        if(value==elements[i]) return test=true;
    }
    return test;
}
void Array::print()
{
    for(int i = 0; i < size; i++)
    {
        cout<<elements[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    Array list;
    Array list2,list3;
    int mang[100], n;
    list.push(1);
    list.push(3);
    list.push(6);
    list.push(4);
    list.push(16);
    list.push(28);
    list.push(64);

    list2.push(26);
    list2.push(2);
    list2.push(99);
    list.remove(6);
    list.update(2,10);
    list.print();
    cout<<"exist: "<<list.exist(11)<<endl;
    cout<<"getelements: "<<list.getelements(6)<<endl;
    list.append(list2).print();
    list.print();
    return 0;
}