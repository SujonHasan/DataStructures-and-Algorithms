/*
    ***Bismillahir Rahmanir Rahim***
    date---: "19-09-2021"
    time---: "11-42-26"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define Faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); // cin cout code faster
#define RESET(a,x)    memset(a,x,sizeof(a)) //set elements of array / character to some value
#define ll          long long
#define ull         unsigned long long
#define ui          unsigned int
#define endl        "\n"
#define MAX(a, b)   a = max(a, b); // maximum number return
#define MIN(a, b)   a = min(a, b); // minimum number return
#define cout(a)     cout << a << endl;

void left_right_shift();
 
int main()
{
    Faster();

    left_right_shift();

 
    return 0;
 
}

void left_right_shift()
{
    int n = 12;

    // n << 1 == n * 2 
    // n << 2 == n * 4
    // n << 3 ==  n * 8

    // int a = n * 8; // two operation are same
    // cout << a << endl;
    int b = n << 2;
    cout << b << endl;


    // n >> 1 == n / 2;
    // n >> 2 == n / 4
    // n >> 3 == n / 8

    int c = n / 2;
    cout << c << endl;
    int d = n >> 2;
    cout << d << endl;
}