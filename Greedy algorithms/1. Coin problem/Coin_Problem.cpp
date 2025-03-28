/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-09-2021"
    time---: "16-02-59"
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

int a[] = {1, 2, 5, 10, 20, 50, 100, 200};
 
int main()
{
    Faster();

    int value;

    cout << "Enter your value = " << endl;
    cin >> value;

    for(auto k : a)
    {
        cout << k << " ";
    }
    cout << endl;
    vector<int> v;

    // cout << n << endl;

    for (int i = 7; i >= 0; i--)
    {
        while (value >= a[i])
        {
            value -= a[i];
            v.push_back(a[i]);
        }
        
    }

    cout << v.size() << endl;
    for(auto i : v)
    {
        cout << i << " ";
    }
 
    return 0;
 
}