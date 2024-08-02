#include <iostream>
#include <conio.h>

using namespace std;

void merge_sort(int *array, int left, int right);
void merge_array(int *array, int left, int mid, int right);

int main()
{
    int array[] = {1, 5, 6, 3, 8, 4, 7, 2};

    int length = (sizeof(array) / sizeof(int) - 1);

    cout << "Befor Array =  : ";
    for (int i = 0; i <= length; i++)
    {
        cout << array[i] << " ";
    }
    cout <<'\n';
    

    merge_sort(array, 0, length);

    cout << "After Array =  : ";
    for (int i = 0; i <= length; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

void merge_sort(int *array, int left, int right)
{

    if (left == right)
    {
        return;
    }

    int mid = left + (right - left) / 2;

    merge_sort(array, left, mid);
    merge_sort(array, mid + 1, right);

    merge_array(array, left, mid, right);
}

void merge_array(int *array, int left, int mid, int right)
{
    int j = mid + 1;

    int lenght = ((mid - left) + (right - (mid + 1)) + 2);
    int A[lenght];
    int index_a = 0;

    for (int i = left; i <= mid; i++)
    {
        if (j == (right + 1))
        {
            A[index_a++] = array[i];
            continue;
        }

        for (; j <= right; j++)
        {
            if (array[i] <= array[j])
            {
                A[index_a++] = array[i];
                break;
            }

            A[index_a++] = array[j];
        }

        if (j == (right + 1))
        {
            i--;
        }
    }

    for (; j <= right; j++)
    {
        A[index_a++] = array[j];
    }

    for (int i = 0; i < lenght; i++)
    {
        array[left + i] = A[i];
    }
}
