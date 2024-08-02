/*
    ***Bismillahir Rahmanir Rahim***
    date---: "26-03-2021"
    time---: "10-42-16"
    Author-: Sujon Hasan
*/
 
#include <iostream>
 
using namespace std;

int Binary_Search(int A[], int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;
    
    if (A[mid] == x)
    {
        return mid;
    }
    else if (A[mid] > x)
    {
        return Binary_Search(A, low, mid -1, x); // calling function
    }
    else
    {
        return Binary_Search(A, mid + 1, high, x); // calling function
    }  
    
}
 
int main()
{
    int A[] = {2, 6, 13, 21, 36, 47, 63, 81, 90};

    int size = sizeof(A) / sizeof(int);

    cout << "Enter your search number: ";
    int x;
    cin >> x;

    int index = Binary_Search(A, 0, size - 1, x);

    if (index != -1)
    {
        cout << "Number = " << x << " Index = " << index + 1 << endl;
    }
    else
    {
        cout <<"Number not found\n";
    }

    return 0;
 
}