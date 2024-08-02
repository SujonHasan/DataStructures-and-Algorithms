/*
    ***Bismillahir Rahmanir Rahim***
    date---: "03-04-2022"
    time---: "16-58-12"
    Author-: Sujon Hasan
*/
 
#include <iostream>
#include <map>
 
using namespace std;
 
int main()
{

    multimap<int, int> m;

    // m[5] = 10; 
    // m[4] = 10; 
    // m[3] = 10; 
    // m[2] = 10; 
    // m[1] = 10; 
    m.insert(make_pair(5,10));
    m.insert(make_pair(4,9));
    m.insert(make_pair(5,8));
    m.insert(make_pair(4,7));
    m.insert(make_pair(1,6));

    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
 
    return 0;
 
}