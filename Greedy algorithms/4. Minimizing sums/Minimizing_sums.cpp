/*
    ***Bismillahir Rahmanir Rahim***
    date---: "01-10-2021"
    time---: "18-49-18"
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

    int n;

    cin >> n;

    vector<int> v(n);
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s += v[i];
        s += pow(v[i], 2);
    }

    cout << "S = " <<s <<endl;

    int x = s / n;

    cout << "x = " << x << endl;

    ll minSum = (n * pow(x, 2)) - (2 * x * s);
    // int minSum = pow(3, 2);

    cout << minSum << endl;
    
    return 0;
 
}