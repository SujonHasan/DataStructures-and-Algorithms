/*
    ***Bismillahir Rahmanir Rahim***
    date---: "22-06-2022"
    time---: "11-17-40"
    Author-: Sujon Hasan


    Given an integer n and a prime number p, 
    find the largest x such that px (p raised to power x) 
    divides n! (factorial) 
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

int largestPower(int n, int p)
{
    int power = 0;

    while (n)
    {
        n /= p;
        power += n;
    }
    
    return power;
}

int largestPower2(int n,int p)
{
    int power = 0;

    while ((n / p) > 0)
    {
        power += (n / p);
        p *= p;
    }
    
    return power;
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, p;

    cin >> n >> p;

    cout << "The largest power of "<< p <<" that divides " << n << "! is "<<largestPower2(n, p) << endl;
 
    return 0;
 
}