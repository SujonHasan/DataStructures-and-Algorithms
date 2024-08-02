// ***Bismillahir Rahmanir Rahim***
// Date and Time: 22-02-2021 : 19:46:48
// Author-------: Sujon Hasan

#include <iostream>

#define Max_size 5

using namespace std;

class Queue
{
private:
    /* data */
public:
    int head = 0;
    int tail = 0;
    int data[Max_size];
    void enqueue(int value);
    int dequeue();
    void display();
    Queue(/* args */);
    ~Queue();
};

Queue::Queue(/* args */)
{
}

void Queue::display()
{
    int index = head;

    if (index == tail)
    {
        cout << "Queue is Empty \n";
    }

    while (index != tail)
    {
        cout << data[index] << " ";

        index = (index + 1) % (Max_size);
    }
    cout << endl;
}

void Queue::enqueue(int value)
{
    if ((tail + 1) % (Max_size) == head)
    {
        cout << "Queue is full \n";
    }
    else
    {
        data[tail] = value;
        tail = (tail + 1) % (Max_size);
    }
}

int Queue::dequeue()
{
    int value;

    if ((head + 1) % Max_size == tail)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        value = data[head];
        head = (head + 1) % (Max_size);
    }

    return value;
}

Queue::~Queue()
{
}

int main()
{
    Queue q;

    while (1)
    {
        cout << "1. enqueue:\n";
        cout << "2. dequeue:\n";
        cout << "3. display:\n";

        int n;

        cin >> n;

        if (n == 1)
        {
            cout << "enter number: ";
            int item;
            cin >> item;
            q.enqueue(item);

            cout << "head = " << q.head << endl;
            cout << "tail = " << q.tail << endl;
        }
        else if (n == 2)
        {
            q.dequeue();
            cout << "head = " << q.head << endl;
            cout << "tail = " << q.tail << endl;
        }
        else if (n == 3)
        {
            q.display();
        }
    }

    // cout << "head = " << q.head <<endl;
    // cout << "tail = " << q.tail <<endl;

    // int queue = q.dequeue();
    // cout << "dequeue = " << queue << endl;
    // int queue1 = q.dequeue();
    // cout << "dequeue = " << queue1 << endl;

    // q.display();

    return 0;
}