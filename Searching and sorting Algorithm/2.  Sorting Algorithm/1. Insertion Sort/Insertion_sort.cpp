
// ***Bismillahir Rahmanir Rahim***
// Date and Time: 21-02-2021 : 19:47:38
// Author-------: Sujon Hasan

#include <iostream>
#include <conio.h>

using namespace std;

/*

    TIme complexity = O(n*n)
    Space complexity - O(1)

*/

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void Insertion_sort(int *A, int n)
{
    int i = 1, j;
    int value;

    while (i < n)
    {
        value = A[i];
        // cout << "value = " << value << endl;

        for (j = i - 1; j >= 0; j--)
        {
            if (value > A[j])
            {
                A[j + 1] = A[j];
            }
            else
            {

                break;
            }
        }

        A[j + 1] = value;

        // display(A, n);

        i++;
    }
}

int main()
{
    int n = 5;

    int A[n] = {5, 2, 3, 1, 4};

    Insertion_sort(A, n);

    display(A, n);

    return 0;
}