/*
    ***Bismillahir Rahmanir Rahim***
    date---: "01-05-2021"
    time---: "00-39-22"
    Author-: Sujon Hasan
*/
 
#include <iostream>
#include <queue>
 
using namespace std;

/*
    Priority queues are a type of container adapters, specifically 
    designed such that the first element of the queue is the greatest 
    of all elements in the queue and elements are in non increasing order 
    (hence we can see that each element of the queue has a priority {fixed order}).

    syntax : priority_queue<data_type> priority_quiue_name;

            priority_queue<int> q;
            priority_queue<pair<int, int> q;
            priority_queue<int, vector<int> , greater<int>> q; // it's insert increasing order

    1. first value cout 

        q.top();

    2. first value remove 

        q.pop();


*/
 
int main()
{
    // priority_queue<int> q;
    priority_queue<int, vector<int>> q;

    q.push(1);
    q.push(3);
    q.push(2);
    q.push(6);
    q.push(5);
    q.push(4);
    q.push(9);

    cout << "top value = " << q.top() << endl;

    q.pop(); // top value deleted 

    int value = q.top();
    cout << "value = " << value << endl;

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    
    cout << endl;
 
    return 0;
 
}