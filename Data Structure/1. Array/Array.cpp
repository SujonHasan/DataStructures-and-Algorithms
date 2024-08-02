/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-04-2021"
    time---: "02-57-16"
    Author-: Sujon Hasan
*/
 
#include <iostream>
#include <algorithm>
 
using namespace std;

/*

        **** Array*****

    1. array sort.
        a. my_array sorting = it generally takes two parameter,
        first one staring sorting point. second ending point.
        
        syntex : sort(array, array + n); // assending
        syntex : sort(array, array + n, greater<int>()) // desending order



*/


void array_sort();
 
int main()
{

    array_sort();


    return 0;
 
}

void array_sort()
{
    int a[] = {1, 5, 2, 4, 7, 3, 6};

    cout << "assending order = " ;
    sort(a, a + 7);

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "desending order = " ;
    sort(a, a + 7, greater<int>());

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    

}