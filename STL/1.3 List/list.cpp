/*
    ***Bismillahir Rahmanir Rahim***
    date---: "01-04-2022"
    time---: "11-32-58"
    Author-: Sujon Hasan
*/

/*

C++ List
1. List is a contiguous container while vector is a non-contiguous container i.e list stores the elements on a contiguous memory and vector stores on a non-contiguous memory.

2. Insertion and deletion in the middle of the vector is very costly as it takes lot of time in 
shifting all the elements. Linklist overcome this problem and it is implemented using list container.

3. List supports a bidirectional and provides an efficient way for insertion and deletion operations.
4. Traversal is slow in list as list elements are accessed sequentially while vector supports a random access.

*/
 
#include <iostream>
#include <list>
#include <stdlib.h>
 
using namespace std;

void listInitialize(list<int> &A)
{
    srand(0);
    cout <<"Enter your list item: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int value = rand() % n + 1;
        A.push_back(value);
        // cout << "size = " << A.size() << endl;
        // cout << "max size = " << A.max_size() << endl;
        // A.push_front(i * 2);
    }

    for(auto x : A) cout << x << " ";
    cout << endl;

    A.pop_back();
    A.pop_front();

    for(auto x : A) cout << x << " ";
    cout << endl;
}

void emptyCheck(list<int> &A)
{
    if(A.empty()) cout << "list is empty" << endl;
    else cout << "list is not empty" << endl;
}

void frontBack(list<int> &A)
{
    int value = A.front();
    value = 100;
    cout << "front value = " << value << endl;
    cout <<"Back vlaue = " << A.back() << endl;
    for(auto x : A) cout << x << " ";
    cout << endl;

}

void listSwap()
{
    list<int> A = {1, 2, 3, 4};
    list<int> B = {6, 7, 8};

    cout << "Before swap = : " << endl;
    for(auto x : A) cout << x << " ";
    cout << endl;
    for(auto y: B) cout << y << " ";
    cout << endl;

    A.swap(B);

    cout <<"After swap = " << endl;
    for(auto x : A) cout << x << " ";
    cout << endl;
    for(auto y: B) cout << y << " ";
    cout << endl;

}

void listReverse(list<int> &A)
{
    A.reverse();

    cout <<"After reverse : ";
    for(auto x: A) cout << x << " ";

}

void listSort(list<int> &A)
{
    A.sort();
    cout << "Assending sort : ";
    for(auto i : A) cout << i << " ";
    cout << endl;

    A.sort(greater<int>());
    cout <<"Descending Order : ";
    for(auto i : A) cout << i << " ";
    cout << endl;
}

bool comparison(int a, int b)
{
    return a < b;
}

void listMerge()
{
    list<int> a = {1, 3, 4, 5};
    list<int> b = {6, 7, 8, 9};

    // a.merge(b, comparison);

    a.merge(b);

    for(auto i : a) cout << i << " ";
    cout << endl;

}

void listSplice()
{
    list<int> a = {1, 2, 3, 4};
    list<int> b = {5, 6, 7};

    a.splice(a.begin(), b);

    for(auto i : a) cout << i << " ";
    cout << endl;

} 

void listUnique()
{
    //C++ List unique() function removes all the duplicate elements present consecutively from the list.
    list<int> a = {1, 2, 3, 2, 2, 3, 3,};

    // a.sort();
    a.unique();

    for(auto i : a) cout << i << " ";
    cout << endl;
}

int main()
{

    list<int> mylist;

    // listInitialize(mylist);

    // cout << "size " << mylist.size() << endl;
    // emptyCheck(mylist);

    // frontBack(mylist);

    // listSwap();

    // listReverse(mylist);
    
    // listSort(mylist);

    // listSort(mylist);

    // listMerge();

    // listSplice();

    listUnique();
    
    return 0;
 
}