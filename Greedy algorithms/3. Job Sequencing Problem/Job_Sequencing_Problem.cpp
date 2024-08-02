/*
    ***Bismillahir Rahmanir Rahim***
    date---: "01-10-2021"
    time---: "17-17-55"
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

    int completeTask = 0, totalProfit = 0;

        // deadlin and profit
    vector<pair<int,int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second >> v[i].first;
    }

    sort(v.rbegin(), v.rend());

    // cout <<endl;

    for(auto x : v)
    {
        if(x.second > completeTask)
        {
            totalProfit += x.first;
            completeTask++;
        }
    }
    
    cout << "Total Complete Task = " << completeTask << endl;
    cout << "Total profit = " << totalProfit << endl;

 
    return 0;
 
}