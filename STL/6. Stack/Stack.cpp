/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-04-2021"
    time---: "01-58-14"
    Author-: Sujon Hasan
*/
 
#include <iostream>
#include <stack>
 
using namespace std;

/*


    Stacks are a type of container adaptors with LIFO(Last In First Out) 
    type of working, where a new element is added at one end and (top) 
    an element is removed from that end only.  Stack uses an encapsulated 
    object of either vector or deque (by default) or list (sequential 
    container class) as its underlying container, providing a specific 
    set of member functions to access its elements.


    The functions associated with stack are: 

    empty() – Returns whether the stack is empty – Time Complexity : O(1) 

    size() – Returns the size of the stack – Time Complexity : O(1) 

    top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)

    push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 

    pop() – Deletes the top most element of the stack – Time Complexity : O(1) 


*/
 
int main()
{
    stack<int> s;

    s.push(1);
    s.push(4);
    s.push(2);
    s.push(5);
    s.push(3);

    cout << "top value = " << s.top() << endl;

    s.pop(); // delete top value ;

    cout << "size = " << s.size() << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
 
    return 0;
 
}