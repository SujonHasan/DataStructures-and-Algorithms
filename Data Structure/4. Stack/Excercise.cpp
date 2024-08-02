// ***Bismillahir Rahmanir Rahim***
// Date and Time: 24-02-2021 : 16:27:08
// Author-------: Sujon Hasan

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int is_balanced(string input)
{
    string stack;
    string stack1;
    int i, len,k = 0;
    len = input.size();

    for (i = 0; i < len; i++)
    {
        if ((input[i] == '(' || input[i] == '{' || input[i] == '[') && k == 0)
        {
            stack += input[i];
        }
        else if (input[i] == ')' || input[i] == '}' || input[i] == ']')
        {
            stack1 += input[i];
            k = 1;   
        }
        else
        {
            return 0;
        }        
    }

    // cout << "stack " << stack << endl;

    int len1 = stack.size() - 1;
    int len2 = stack1.size() - 1;

    cout << stack << " len =  " << len1 << endl;
    cout << stack1 << " len =  " << len2 << endl;
    _getch();

    if (len1 != len2)
    {
        return 0;
    }
    
    
    for ( i = 0; i <= len1; i++)
    {
        cout << stack[i] << " " << stack1[len2] << endl;  
        _getch();
        int check = stack1[len2];
        if (check == 41)
        {
            if (input[i] == (check - 1))
            {
                --len2;
            }
            
        }
        else if(input[i] == (check - 2))
        {
            --len2;
        }        
        else
        {
            return 0;
        }
    }

    return 1;    
    
}

int main()
{
    string stack;

    getline(cin, stack);

    if (is_balanced(stack))
    {
        cout << stack << " is balanced" << endl;
    }
    else 
    {
        cout << stack << " is not balanced";
    }
    

    return 0;
}