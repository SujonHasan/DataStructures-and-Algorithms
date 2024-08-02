// ***Bismillahir Rahmanir Rahim***
// Date and Time: 19-02-2021 : 21:05:42
// Author-------: Sujon Hasan

#include <iostream>
#include <conio.h>

using namespace std;

int Binary_search(int *A, int n, int search_key)
{
    int start = 0, end = n - 1, mid = 0;

    while (start <= end)
    {
        mid = start + 
        (end - start) / 2;

        if (A[mid] == search_key)
        {
            return ++mid;
        }
        else if (A[mid] < search_key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

    }

    return -1;
}

int main()
{
    int n = 14;

    int array[n] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27};
    int search_key = 15;
    int return_index = Binary_search(array, n, search_key);

    if (return_index == -1)
    {
        cout << "number not present here....\n";
    }
    else
    {
        cout << "number index = " << return_index << endl;
    }

    return 0;
}