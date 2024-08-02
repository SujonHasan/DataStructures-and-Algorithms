/*
    ***Bismillahir Rahmanir Rahim***
    date---: "28-04-2021"
    time---: "22-24-53"
    Author-: Sujon Hasan
*/
 
#include <iostream>
#include <set>
 
using namespace std;

/*
    Multisets are a type of associative containers similar to set, 
    with an exception that multiple elements can have same values.

    time complexity O(log n)

    value insert assending order sorterd

    1. Multisets initilize

        a. multiset<int> s;
        b. multiset<string> s;
        c. multiset<pair<int, int>> s;

        1. initilize direct multiset<int> s = {1, 2, 3, 4, 5};
        or 
        2. s.insert(2);
           s.insert(3);

        output .
        a. use iterator
        b. use for each loop

    2.  erase()
        erase() function is used to remove elements from a container from 
        the specified position or range.

        Syntax :
        1. setname.erase(value) //   delete all same value

        2.  auto it = find(value)
            setname.erase(it) // just 1 item delete this value

    
    3. modify()

        a. s.size() // set size print
        b. *(s.begin()) // print first element




*/

void Multiset_initilize();
void Multiset_modify();
void Multiset_erase();
 
int main()
{
    Multiset_initilize();

    // Multiset_modify();

    // Multiset_erase();

    return 0;
 
}

void Multiset_initilize()
{
    // // // multiset<int> s = {, 2, 3, 4, 1, 2, 3}; // one way ..

    multiset<int> s1;

    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(2);
    s1.insert(1);
    s1.insert(3);
    s1.insert(4);

    int size = s1.size();

    // // output just use iterator or for each loop

    multiset<int>:: iterator it;

    for(it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << endl;
    }
    

    // for(auto v : s1)
    // {
    //     cout << v << endl;
    // }



    // set use string

    // multiset<string> s;

    // s.insert("sujon");
    // s.insert("faird");
    // s.insert("faird");
    // s.insert("kawsar");
    // s.insert("kawsar");
    // s.insert("jontu");
    // s.insert("jontu");

    // cout << "size = " << s.size() << endl;

    // // sort and unique value print
    // for(auto v : s) 
    // {
    //     cout << v << endl;
    // }



    // // set pair use 

    // multiset<pair<int, int> > s;
    // // // multiset<pair<int, int> , greater<pair<int , int>>> s;  // desending order sort

    // s.insert(make_pair(2, 1));
    // s.insert(make_pair(2, 1));
    // s.insert(make_pair(3, 1));
    // s.insert(make_pair(3, 1));
    // s.insert(make_pair(2, 2));
    // s.insert(make_pair(2, 2));
    // s.insert(make_pair(4, 2));
    // s.insert(make_pair(4, 2));
    // s.insert(make_pair(5, 2));
    // s.insert(make_pair(5, 2));

    // cout << "size = " << s.size() << endl;

    // for(auto v : s)
    // {
    //     cout << v.first << " " << v.second << endl;
    // }

}

void Multiset_modify()
{
    multiset<int> s = {1, 3, 1, 2, 3, 2, 1};
    
    // multiset<int> s;
    // s.insert(2);
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);

    int size = s.size();
    cout << "size = " << size << endl;

    cout << s.count(2) << endl; // count alwyes return 1, becouse set unique value

    cout << "first element = " << *(s.begin()) << endl;
    cout << "last element = " << *(s.rbegin()) << endl;

    cout << "check empty = " << s.empty() << endl;
}

void Multiset_erase()
{
    multiset<int> s = {1, 3, 1, 2, 3, 2, 1, 5, 7, 9};

    s.erase(1); // delete all this value

    // auto it = s.find(1);

    // s.erase(it); // just 1 ite, erase this value 

    
    for(auto v : s)
    {
        cout << v << endl;
    }

}