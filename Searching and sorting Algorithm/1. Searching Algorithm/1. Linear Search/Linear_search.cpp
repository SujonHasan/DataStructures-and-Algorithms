// ***Bismillahir Rahmanir Rahim***
// Date and Time: 19-02-2021 : 20:14:38
// Author-------: Sujon Hasan

#include <iostream>

using namespace std;

int Linear_search(int *Array,int n, int search_key)
{
    /*
    Time complexity = O(n)
    space complexity = O(1)

    */

    int i = 0;

    while (i < n)
    {
        if (Array[i] == search_key)
        {
            return ++i;
        }
        
        i++;
    }

    return -1;
    
}

int main()
{
    /*
    time complexity = O(n).
    space complexity = O(n).


    */
    int n =  9;
    int Array[n] = {1, 9, 7, 2, 8, 5, 4, 6, 3};
    int search_key = 8;

    int return_index = Linear_search(Array,n, search_key);

    if (return_index == -1)
    {
        cout << "search number is not present here\n";
    }
    else
    {
        cout << "search index = " << return_index << endl;
    } 

    return 0;
}