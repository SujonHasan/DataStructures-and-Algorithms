/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-09-2021"
    time---: "17-09-03"
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

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << (1 & (num >> i));
    }
    cout << endl;
    
}
 
int main()
{
    Faster();

    int x = 9;

    cout << "x binary = ";
    printBinary(x);

    // any index is set 
    cout << "set i index = " ;
    // printBinary(x | (1 << 1)); // bit set 1 number index
    // cout << (x | (1 << 1)) << endl;


    // unset any index 
    cout << "unset i tomo index " ;
    printBinary(x &(~(1 << 3)));


    // toggle any index 
    cout << "toggle i tomo index = ";
    printBinary(x ^ (1 << 5));


 
    return 0;
 
}