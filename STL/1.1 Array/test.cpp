// ***Bismillahir Rahmanir Rahim***
// Date and Time: 04-02-2021 : 15:32:45
// Author-------: Sujon Hasan

#include <iostream>
#include <array>

using namespace std;

void display(int *Array)
{
    for (int i = 0; i < 5; i++)
    {
        cout << Array[i] << " ";
    }
    
}

void display2(array<int, 5> mArray)
{
    for (int i = 0; i < 5; i++)
    {
        cout << mArray[i] << " ";
    }
    
}

int main()
{
    // int Array[5] = {1, 2, 3, 4, 5};
    // array<int , 5> mArray = {5, 4, 3, 2, 1};

    // display(Array);
    // cout << "\n";
    // display2(mArray);

    string s = "123";
    int a = 4;

    s += to_string(a);

    cout << s << endl;

    return 0;
}