/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-04-2021"
    time---: "22-51-25"
    Author-: Sujon Hasan
*/
 
#include <iostream>
#include <deque>
 
using namespace std;

/*
        Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
        They are similar to vectors, but are more efficient in case of insertion and deletion 
        of elements. Unlike vectors, contiguous storage allocation may not be guaranteed.

        syntax: deque<datatype> deque_name;
            deque<int> dq;

    1. deque insert

            dq.push_front(5);
            dq.push_back(3);

    2. queue first value 
            dq.front()
            dq.back() 


    3. queue delete first value 

        dq.pop_front(); // first element delte 
        dq.pop_back(); // last elment delete ;




*/

void display(deque<int> q)
{
    deque<int> p = q;

    cout << "deque forward value print: "; 
    while (!p.empty())
    {
        cout << p.front() << " ";
        p.pop_front();
    }
    cout << endl;

    cout << "deque reverse value print : ";

    for(auto it = q.rbegin(); it != q.rend(); it++)
    {
        cout << *it << " ";
    }
    
}

void dequeSwap()
{
    deque<int> d1 = {1,2, 3, 4};
    deque<int> d2 = {10, 20 , 30, 40};

    d1.swap(d2);
    cout << "after swap d1 = ";
    for(auto i : d1) cout << i << " "; 
    cout << endl;

    cout << "after swap d2 = ";
    for(auto i : d2) cout << i << " "; 

}
 
int main()
{
    deque<int> dq;

    dq.push_front(1);
    dq.push_front(5);
    dq.push_back(3);
    dq.push_back(2);
    dq.push_back(2);
    dq.push_back(4);
    dq.push_back(4);
    dq.insert(dq.begin() + 2, 50);

    cout << "front = " << dq.front() << endl;
    cout << "back = " << dq.back() << endl;

    dq.pop_front(); // first element delte 
    dq.pop_back(); // last elment delete ;

    display(dq);
    cout << endl;

    // dq.clear();

    if(dq.empty()) cout << "deque is empty" << endl;
    else cout << "deque size is = " << dq.size() << endl;

    dq.erase(dq.begin(), dq.begin() + 3);
    cout << "after erase = " << endl;
    display(dq);
    cout << endl;

    // dequeSwap();
 
    return 0;
 
}