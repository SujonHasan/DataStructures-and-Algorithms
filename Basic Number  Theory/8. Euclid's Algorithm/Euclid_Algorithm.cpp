/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-05-2022"
    time---: "23-38-53"
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

int GCD(int a, int b)
{
    if(a == 0) return b;
    if(b == 0) return a;

    if(a < b) swap(a , b);

    return GCD(a % b, b);
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int a, b;
    cin >> a >> b;

    // cout << __gcd(a, b) << endl; //// cpp builtine function

    cout << GCD(a, b) << endl;
 
    return 0;
 
}