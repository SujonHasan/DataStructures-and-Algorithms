/*
    ***Bismillahir Rahmanir Rahim***
    date---: "30-05-2022"
    time---: "23-21-57"
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

int findTrailingZeros(int n)
{
    if(n < 1) return -1;
    int count = 0;
    for (int i = 5; n / i > 0; i *= 5)
    {
        count += (n / i);
    }
    return count;
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;

    cin >> n;

    cout << "Count of trailing 0s in " << n << "! is " << findTrailingZeros(n);
 
    return 0;
}