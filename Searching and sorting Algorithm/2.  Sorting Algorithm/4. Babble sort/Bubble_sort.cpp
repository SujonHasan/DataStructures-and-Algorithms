// ***Bismillahir Rahmanir Rahim***
// Date and Time: 21-02-2021 : 14:34:40
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

void Bubble_sort(int *A, int n)
{
    int i = 0;

    while (i < n)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
            }

            display(A, n);
            
        }

        i++;
        
    }
    
}

int main()
{
    int n = 5;

    int A[n] = {8, 2, 4, 1, 5};

    cout << "main array = " ;
    display(A, n);

    Bubble_sort(A, n);

    display(A, n);

    return 0;
}