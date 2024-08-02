// ***Bismillahir Rahmanir Rahim***
// Date and Time: 20-02-2021 : 22:42:39
// Author-------: Sujon Hasan

#include <iostream>
#include <conio.h>

using namespace std;

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    _getch();
}

void Selection_sort(int *A, int n)
{
    int i = 0;
    int minimum_index;

    while (i < n - 1)
    {
        minimum_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (A[minimum_index] > A[j])
            {
                minimum_index = j;
            }
        }

        if (minimum_index != i)
        {
            swap(A[i], A[minimum_index]);
        }

        i++;
        // display(A, n);
    }
}

int main()
{
    /*
    time complexity = O(n)
    space complexity = O(n)

    */
    int n = 5;
    int A[n] = {10, 7, 8, 5, 3};

    Selection_sort(A, n);

    display(A, n);

    return 0;
}