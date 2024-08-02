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
    Sets are a type of associative containers in which each element 
    has to be unique ans assending order sort, because the value of the element identifies it. 
    The value of the element cannot be modified once it is added to the set,
    though it is possible to remove and add the modified value of that element.

    time complexity O(log n)

    1. set initilize

        a. set<int> s;
        b. set<string> s;
        c. set<pair<int, int>> s;

        1. initilize direct set<int> s = {1, 2, 3, 4, 5};
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
        1. setname.erase(value)
        2. setname.erase(position iterator)
        3. setname.erase(startingposition, endingposition)

    
    3. modify()

        a. s.size() // set size print
        b. *(s.begin()) // print first element




*/

void set_initilize();
void set_modify();
void set_erase();
 
int main()
{
    set_initilize();

    // set_modify();

    // set_erase();

    return 0;
 
}

void set_initilize()
{
    // // set<int> s = {, 2, 3, 4, 1, 2, 3}; // one way ..

    // set<int> s1;

    // s1.insert(1);
    // s1.insert(2);
    // s1.insert(3);
    // s1.insert(2);
    // s1.insert(1);
    // s1.insert(3);
    // s1.insert(4);

    // int size = s1.size();

    // // output just use iterator or for each loop

    // // set<int>:: iterator it;

    // // for(it = s1.begin(); it != s1.end(); it++)
    // // {
    // //     cout << *it << endl;
    // // }
    

    // for(auto v : s1)
    // {
    //     cout << v << endl;
    // }



    // set use string

    // set<string> s;

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



    // set pair use 

    set<pair<int, int> > s;
    // set<pair<int, int> , greater<pair<int , int>>> s;  // desending order sort

    s.insert(make_pair(2, 1));
    s.insert(make_pair(2, 1));
    s.insert(make_pair(3, 1));
    s.insert(make_pair(3, 1));
    s.insert(make_pair(2, 2));
    s.insert(make_pair(2, 2));
    s.insert(make_pair(4, 2));
    s.insert(make_pair(4, 2));
    s.insert(make_pair(5, 2));
    s.insert(make_pair(5, 2));

    cout << "size = " << s.size() << endl;

    for(auto v : s)
    {
        cout << v.first << " " << v.second << endl;
    }

}

void set_modify()
{
    set<int> s = {1, 3, 1, 2, 3, 2, 1};
    
    // set<int> s;
    // s.insert(2);
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);

    int size = s.size();
    cout << "size = " << size << endl;

    cout <<"Max Size = " << s.max_size() << endl;

    cout << s.count(2) << endl; // count alwyes return 1, becouse set unique value

    cout << "first element = " << *(s.begin()) << endl;
    cout << "last element = " << *(s.rbegin()) << endl;

    cout << "check empty = " << s.empty() << endl;
}

void set_erase()
{
    set<int> s = {1, 3, 1, 2, 3, 2, 1, 5, 7, 9};

    s.erase(9); // this value delter 

    // s.erase(s.begin() ,s.find(3)); // it's erase begin to find value

    // s.erase(s.begin()); // this position value delte 

    // set<int> :: iterator it1, it2;

    // it1 = s.begin();
    // it2 = s.end();

    // it2--;
    // it2--;

    // s.erase(it1, it2);

    for(auto v : s)
    {
        cout << v << " ";
    }

}