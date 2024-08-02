/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-09-2021"
    time---: "10-28-52"
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

    // *****check sign and unsign 

    // int x = -43;

    // unsigned int y = x;

    // cout <<"x = " << x << endl;
    // cout << "y = " << y << endl; // nagative number not assign unsigned int 


    //******* number overflow  

    int a = -2147483647;

    cout << " before ++ a = " << a << endl;
    a++; // it's overflow

    cout << "after ++ = " << a << endl; 


 
    return 0;
 
}