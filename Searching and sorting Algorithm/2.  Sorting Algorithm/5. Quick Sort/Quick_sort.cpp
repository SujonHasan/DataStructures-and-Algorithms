#include <iostream>

using namespace std;

void quick_sort(int *a, int low, int high);
int partition(int *a, int low, int high);


int main()
{
    int array[] = {6, 3, 8, 4, 2, 7, 5};

    int lenght = (sizeof(array) / sizeof(int) - 1);

    cout << "Befor array : ";
    for (int i = 0; i <= lenght; i++)
    {
        cout << array[i] << " ";
    }
    cout << '\n';

    quick_sort(array, 0 , lenght);

    cout << "After array: ";
    for (int i = 0; i <= lenght; i++)
    {
        cout << array[i] << " ";
    }
    

    return 0;
}

void quick_sort(int *a, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int p = partition(a, low, high);

    quick_sort(a, low, p - 1);
    quick_sort(a, p + 1, high);
    

}

// pivot low
int partition(int *a, int low, int high)
{
    int pivot, i, j, t;

    pivot = low;
    i = high + 1;

    for ( j = high ; j > low; j--)
    {
        if (a[j] > a[pivot])
        {
            i--;
            t = a[j];
            a[j] = a[i];
            a[i] = t;
        }
        
    }

    t = a[pivot];
    a[pivot]  = a[i - 1];
    a[i - 1] = t;

    return i - 1;
    
}


// //pivot hight 
// int partition(int *a, int low, int high)
// {
//     int pivot, i, j, t;

//     pivot = high;
//     i = low - 1;

//     for ( j = low; j < high; j++)
//     {
//         if (a[j] < a[pivot])
//         {
//             i++;
//             t = a[j];
//             a[j] = a[i];
//             a[i] = t;
//         }
        
//     }

//     t = a[pivot];
//     a[pivot]  = a[i + 1];
//     a[i + 1] = t;

//     return i + 1;
    
// }


// //  PIVOT mid
// int partition(int *a, int low, int high)
// {
//     int pivot, i, j, t;

//     pivot = low + (high -low) / 2;

//     // cout << "Entry " << '\n';
//     // cout << "low = " << low << " high = " << high << " pivot = " << pivot<< '\n';
//     i = low - 1;

//     for ( j = low; j <= high; j++)
//     {
//         if (a[j] < a[pivot])
//         {
//             i++;
//             t = a[j];
//             a[j] = a[i];
//             a[i] = t;

//             if (i == pivot)
//             {
//                 pivot = j;
//             }
            
//         }
        
//     }       

//     // if (a[pivot] == a[low])
//     // {
//     //     i++;
//     // }
    
//     // if (a[pivot] == a[i + 1])
//     // {
//     //     return i + 1;
//     // }
    
    

//     t = a[pivot];
//     a[pivot]  = a[i + 1];
//     a[i + 1] = t;

//     // cout << "Output ....\n";
//     // for (int i = low; i <= high; i++)
//     // {
//     //     cout << a[i] << " ";
//     // }
//     // cout << '\n';

//     // cout << "return " << i + 1  << '\n';

//     // cout << "continue....";
//     // getchar();
    

//     return i + 1;

//     // if (a[i] == a[pivot])
//     // {
//     //     return i;
//     // }    
//     // if (a[i + 1] == a[pivot])
//     // {
//     //     return i + 1;
//     // }
    
// }