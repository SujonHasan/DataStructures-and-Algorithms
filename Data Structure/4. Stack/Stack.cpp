// ***Bismillahir Rahmanir Rahim***
// Date and Time: 22-02-2021 : 16:15:58
// Author-------: Sujon Hasan

#include <iostream>
#include <conio.h>

using namespace std;

// #define stack_max 5

class Stack
{
private:
    /* data */
public:

    int top;
    int *data;
    int stack_max;
    void push(int value);
    int pop();
    void display();
    Stack(/* args */);
    ~Stack();
};

Stack::Stack(/* args */)
{
}

void Stack:: display()
{
    int index = top;

    if (top == -1)
    {
        cout << "stack is empty\n";
    }

    while (index != -1)
    {
        cout << data[index--] <<"\n";
    }
    
}

void Stack::push(int value)
{
    if (top != stack_max)
    {
        data[++top] = value;
        // top++;
    }
    else
    {
        cout << "stack is full \n";
    }
    
}

int Stack::pop()
{
    int return_value;

    if (top == -1)
    {
        cout << "stack is emply\n";
        return -1;
    }
    else
    {
        return_value = data[top];
        --top;
    }

    return return_value;
}

Stack::~Stack()
{
}

Stack* stack_creat(int top, int stack_max);

int main()
{
    Stack *S = stack_creat(-1, 5);

    // cout << "fshdj\n";
    // _getch();

    S->push(10);
    S->push(15);
    S->push(20);
    S->push(25);
    S->push(30);
    S->push(35);

    // int pop_value = S.pop();
    // cout << "value " << pop_value << endl;
    // int pop_value1 = S->pop();
    // cout << "pop value " << pop_value1 << endl;
    // _getch();
    S->display();

    return 0;
}

Stack* stack_creat(int top, int stack_max)
{
    Stack *my_stack = new  Stack;

    my_stack->top = top;
    my_stack->stack_max = stack_max;
    my_stack->data = new int[stack_max];

    return my_stack;
}