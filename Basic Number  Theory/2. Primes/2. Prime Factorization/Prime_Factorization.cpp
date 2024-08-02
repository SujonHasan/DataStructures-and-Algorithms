/*
    ***Bismillahir Rahmanir Rahim***
    date---: "28-04-2022"
    time---: "23-45-32"
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;

    cin >> n;

    vector<int> v;

    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            while (n % i == 0)
            {
                v.push_back(i);
                n /= i;
            }
            
        }
    }

    if(n > 2) v.push_back(n);

    for(auto x : v) cout << x << " ";
 
    return 0;
 
}