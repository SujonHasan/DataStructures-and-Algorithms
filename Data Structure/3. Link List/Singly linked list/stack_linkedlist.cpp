// ***Bismillahir Rahmanir Rahim***
// Date and Time: 27-02-2021 : 21:47:29
// Author-------: Sujon Hasan

#include <iostream>

using namespace std;

class Stack
{
private:
    /* data */
public:
    int data;
    Stack *link;
    Stack(/* args */);
    Stack(int item,Stack *link);
    Stack *push(int item);
    Stack *pop();
    void display();
    ~Stack();
};

Stack::Stack(/* args */)
{
}

Stack::Stack(int item, Stack *link)
{
    this->data = item;
    this->link = link;
}

void Stack::display()
{
    Stack *temp = this;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->link;
    }
    
}

Stack* Stack::pop()
{

    if (this->link == NULL)
    {
        return NULL;
    }

    return this->link;
    
}

Stack* Stack:: push(int item)
{
    Stack *new_stack = new Stack(item, NULL);

    if (this == NULL)
    {
        return new_stack;
    }

    new_stack->link = this;

    return new_stack;    

}

Stack::~Stack()
{
}


int main()
{
    Stack *top = NULL;

    top = top->push(10);
    top = top->push(20);
    top = top->push(30);
    top = top->push(40);
    top = top->pop();
    top = top->pop();
    top = top->pop();
    top = top->push(50);
    top = top->push(60);

    top->display();

    return 0;
}