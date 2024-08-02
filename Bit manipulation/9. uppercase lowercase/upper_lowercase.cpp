/*
    ***Bismillahir Rahmanir Rahim***
    date---: "28-09-2021"
    time---: "15-36-05"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define Faster()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define RESET(a,x)   memset(a,x,sizeof(a))
#define ll           long long
#define ull          unsigned long long
#define ui           unsigned int
#define MAX(a, b)    a = max(a, b);
#define MIN(a, b)    a = min(a, b);
#define cout(a)      cout << a << endl;
#define fZero        __builtin_clz
#define lZero        __builtin_ctz
#define setCount     __builtin_popcount
 
int main()
{
    Faster();

    char A, b;

    // cin >> A >> b;

    // cout << "A = " << A << " b = " << b << endl;

    b = 'A' | ' '; // uppercase to lowercase 

    A = 'a' & '_'; // lowercase to uppercase

    cout << "A = " << A << " b = " << b << endl;


    return 0;
 
}