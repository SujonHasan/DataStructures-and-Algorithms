/*
    ***Bismillahir Rahmanir Rahim***
    date---: "28-09-2021"
    time---: "15-27-24"
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

    int n, input;

    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> input;

        ans ^= input;
        cout << "ans = " << ans << endl;
    }

    cout << ans << endl;
 
    return 0;
 
}