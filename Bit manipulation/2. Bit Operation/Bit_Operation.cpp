/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-09-2021"
    time---: "10-50-51"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define Faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define RESET(a,x)    memset(a,x,sizeof(a))
#define ll          long long
#define ull         unsigned long long
#define ui          unsigned int
#define MAX(a, b)   a = max(a, b);
#define MIN(a, b)   a = min(a, b);
#define cout(a)     cout << a << endl;

void andOperatior()
{
    int a = 22, b = 27;

    cout << "and operator = " << (a & b) << endl;

    /* ever and or check is and operator

        x & 1 == 0 it's even number

        x & 1 == 1 it's odd number

    */ 


    if(a & 1)
    {
        cout << "a is odd number" << endl;
    }
    else{

        cout << "a is even number" << endl;
    }

    if(!(b & 1))
    {
        cout << "b is even number " << endl;
    }
    else
    {
        cout << "b is odd number" << endl;
    }
}
 
int main()
{
    Faster();

    // andOperatior();
    
    // int a = 22, b = 26;

    // // or operator

    cout << "or operator = " << (a | b) << endl;

    // Xor Operator 

    cout << "Xor operator = " << (a ^ b) << endl;

    // check  not operation 

    int x = 100;

    cout << "not operation = " << ~x << endl;

 
    return 0;
 
}