/*
    ***Bismillahir Rahmanir Rahim***
    date---: "28-04-2022"
    time---: "10-14-47"
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

bool isPrimecheckN(int n)
{
    if(n <= 1) return false;

    for (int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0) return false;
    }   
    
    return true;
}

bool isPrimeCheckSquare(int n)
{
    if(n <= 1) return false;

    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }

    return true;
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n; 
    cin >> n;

    // cout << isPrimecheckN(n) << endl;
    cout << isPrimeCheckSquare(n) << endl;

    return 0;
 
}