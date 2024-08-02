#include <iostream>

using namespace std;

/*
    1. two array marge and sort;
    

*/

void merge_sort(int *leftArray, int *rightArray, int leftLength, int rightLength);

int main()
{
    int leftArray[] = {1, 3, 5, 6};
    int rightArray[] = {2, 4, 7, 8}; 

    int leftLength = (sizeof(leftArray) / sizeof(int)); 
    int rightLength = (sizeof(rightArray) / sizeof(int));

    merge_sort(leftArray, rightArray, leftLength, rightLength);

    return 0;
}

void merge_sort(int *leftArray, int *rightArray, int leftLength, int rightLength)
{
    int j = 0;

    for (int  i = 0; i < leftLength ; i++)
    {
        if (j == rightLength)
        {
            cout << leftArray[i] << " ";
            continue;
        }
        
        for ( ; j < rightLength; j++)
        {
            if (leftArray[i] <= rightArray[j])
            {
                cout << leftArray[i] << " ";
                break;
            }

            cout << rightArray[j] << " ";            
            
        }

        if (j == rightLength)
        {
            i--;
        }
        
        
    }

    if (j != rightLength)
    {
        for ( ; j < rightLength; j++)
        {
            cout  << rightArray[j] << " ";
        }
        
    }
    
    
}