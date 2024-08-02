/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-09-2021"
    time---: "15-27-14"
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
 
int main()
{
    Faster();

    int x  = 0;

    x |= (1 << 1);

    cout << x << endl;

    x |= (1 << 3);
    cout << x << endl;

    x |= (1 << 4);
    cout << x << endl;

    x |= (1 << 8);
    cout << x << endl;

    cout << "set count = " << __builtin_popcount(x) << endl;


    // check which bits are set

    for (int i = 0; i < 32; i++)
    {
        if(x & (i << 1))
        {
            cout << i << " ";
        }
    }
    
    // printBinary(x);

    return 0;
 
}
