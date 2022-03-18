// [head]-[]-[]-[tail]
#include <iostream>
using namespace std;
class Node
{
    private: 
        int data;
    public:
        Node *next; // móc xích
        void setdata(int data){this->data=data;}
        int getdata(){return this->data;}
};
class List
{
    public:
        Node *head, *tail;
        List(){head = NULL;}
        void addNode(Node *node);
        void print();
        void remove(int value);
        void update(int source, int des);

};
void List::addNode(Node *node)
{
    if(!head)//head khac NULL
    {
        head = node;
        head->next = NULL;
    }
    else
    {
        Node *current = head;
        while(current->next)// chuyển đến node cuối cùng
        {
            current = current->next;
        }
        current-> next = node;
    }
}

void List::print()
{
    Node *current = head;
    // while(current)
    // {
    //     cout<<current->getdata()<<" ";
    //     current = current->next;
    // }
    for(*current; current!=NULL; current = current->next)
    {
        cout<<current->getdata()<<" ";
    }
    cout<<endl;
}
void List::remove(int value)
{
    Node *current = head;
    for(current; current!=NULL; current = current->next)
    {
        if(current->next->getdata()==value)
        {
            current->next = current->next->next;
            // cout<<"["<<current->getdata()<<"] ";
        }
        current = current->next;
    }
}
void List::update(int source, int des)
{
    Node *current = head;
    while(current)
    {
        if(current->getdata()==source)
        {
            current->setdata(des);
        }
        current = current->next;
    }
}

int main()
{
    List *list = new List();
    Node *node1, *node2, *node3;
    node1 = new Node();    
    node2 = new Node();
    node3 = new Node();

    node1->setdata(4);
    node2->setdata(6);
    node3->setdata(12);
    list->addNode(node1); // = (*list).addNode(node1);
    list->addNode(node2);
    list->addNode(node3);
    list->print();
    list->update(6, 15);
    list->print();
    list->remove(12);
    list->print();
    return 0;
}