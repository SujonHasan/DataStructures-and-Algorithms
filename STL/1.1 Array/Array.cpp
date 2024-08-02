// ***Bismillahir Rahmanir Rahim***
// Date and Time: 02-02-2021 : 08:53:53
// Author-------: Sujon Hasan

#include <iostream>
#include <array>

/*

    1. iterator using
        a. begin() .Returns an iterator pointing to the first element in the array container.
        b. end() . Returns an iterator pointing to the past-the-end element in the array container.
        c. rbegin() retrun value ...
            A reverse iterator to the reverse beginning of the sequence.
        d. rend() . Return Value
            A reverse iterator to the reverse end of the sequence.

    2.  constant iterator 
        a. cbegin().
            Return const_iterator to beginning
            Returns a const_iterator pointing to the first element in the array container.
        b. cend().
            Return const_iterator to end
            Returns a const_iterator pointing to the past-the-end element in the array container.
        c. crbegin()
            Returns a const_reverse_iterator pointing to the last element in the array container.
        d. crend().
            Returns a const_reverse_iterator pointing to the theoretical element preceding the
            first element in the vector, which is considered its reverse end.
    
    3. capacity.
        a. size().
            Returns the number of elements in the array container.
        b. max_size()
            Returns the maximum number of elements that the array container can hold.
            size and max_size of an array object always match.
        c. Empty()
            Returns a bool value indicating whether the array container is empty, i.e. whether its size is 0.
            true if the array size is 0, false otherwise.

    4. Element access.

        a. operator[]
            The element at the specified position in the array.
        b.  at
            Return value. The element at the specified position in the array.
        c. front()
            Access first element
            Returns a reference to the first element in the array container.
        d. back()
            Access last element
            Returns a reference to the last element in the array container.
    
    5. modifiers
        a. Swap content
            Exchanges the content of the array by the content of x,
            which is another array object of the same type (including the same size).



*/

using namespace std;

void constant_iterator(array<int, 5> &myArray);
void Iterator(array<int, 5> &myArray);
void Capacity(array<int, 5> &myArray);
void Element_access(array<int, 5>  &myArray);
void modifiers(array<int, 5> &myArray, array<int, 5> &myArray2);

int main()
{
    array<int, 5> myArray;

    for (int i = 0; i < 5; i++)
    {
        myArray.at(i) = i + 1;
    }

    array<int, 5> myArray2;

    for (int i = 0; i < 5; i++)
    {
        myArray2[i] = i + 6;
    }
    
    // cout << "begin = " << *myArray.begin() << endl;
    // cout << "end = " << *myArray.end() << endl;
    // Iterator(myArray);

    // constant_iterator(myArray);

    // Capacity(myArray);
    // Element_access(myArray);

    // modifiers(myArray, myArray2);


    return 0;
}

void modifiers(array<int, 5> &myArray, array<int, 5> &myArray2)
{
    cout << "befor swapping \n";
    cout << "array1: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << "\narray2: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myArray2[i] << " ";
    }
    
    myArray.swap(myArray2);

    cout << "\nafter swapping \n";
    cout << "array1: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << "\narray2: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myArray2[i] << " ";
    }
}

void Element_access(array<int, 5>  &myArray)
{
    // operator[]
    cout << "operator[] = \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " "; // operator[]
    }

    cout << "\nat = \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myArray.at(i) << " "; // at(i);
    }

    cout <<"\nfront data = " << myArray.front() << endl;
    cout << "back data = " << myArray.back() << endl;
    
}

void Capacity(array<int, 5> &myArray)
{
    cout << "my array size = " << myArray.size() << endl;
    cout << "my array max size = " << myArray.max_size() << endl;
    cout << "my array " << (myArray.empty() ? "is empty" : "is not empty") << "\n";

}


void Iterator(array<int, 5> &myArray)
{
    /*
        using   1. begin()
                2. end()
                3. rbegin()
                4. rend()

    */
    for (auto it = myArray.begin(); it != myArray.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\narray reverse : \n";
    for (auto it = myArray.rbegin(); it < myArray.rend(); it++)
    {
        cout << *it << " ";
    }
}

void constant_iterator(array<int, 5> &myArray)
{
    /*
        using   1. cbegin()
                2. cend()
                3. crbegin()
                4. crend()

    */
    cout << "array value = \n";
    for (auto it = myArray.cbegin(); it != myArray.cend(); it++)
    {
        cout << *it << " "; // can't modify *it.
    }

    cout << "\narray reverse : \n";
    for (auto it = myArray.crbegin(); it < myArray.crend(); it++)
    {
        cout << *it << " "; // can't modify *it.
    }
}