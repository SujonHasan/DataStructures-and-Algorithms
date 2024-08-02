/*
    ***Bismillahir Rahmanir Rahim***
    date---: "22-09-2021"
    time---: "12-23-07"
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

    int n;
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[A[i]]++;
    }

    for(auto i : m)
    {

        while (i.second--)
        {
            cout << i.first << " ";
        }
        
    }
    
    return 0;
 
}