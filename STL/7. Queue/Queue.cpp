/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-04-2021"
    time---: "22-17-44"
    Author-: Sujon Hasan
*/
 
#include <iostream>
#include <queue>
 
using namespace std;

/*

    Queue are a type of container adaptors which operate in a 
    first in first out (FIFO) type of arrangement. Elements are inserted 
    at the back (end) and are deleted from the front. Queues use an 
    encapsulated object of deque or list (sequential container class) as its underlying 
    container, providing a specific set of member functions to access its elements.

    syntax: queue<datatype> queue_name;
            queue<int> q;

    1. queue insert

        q.push(1);

    2. queue first value 

        q.front();
    queue last valeu 
        q.back();

    3. queue delete first value 

        q.pop(); 



*/

void display(queue<int> q)
{
    queue<int> p = q;

    cout << "queue display: ";

    while (!p.empty())
    {
        cout << p.front() << " ";
        p.pop();
    }

    cout << endl;
    
}
 
int main()
{
    queue<int> q;

    q.push(1);
    q.push(1);
    q.push(2);
    q.push(1);
    q.push(4);
    q.push(5);

    cout << "queue front = " << q.front() << endl;
    cout << "queue last valeu = " << q.back() << endl;
    
    q.pop(); // front data delete

    display(q);
 
    return 0;
 
}