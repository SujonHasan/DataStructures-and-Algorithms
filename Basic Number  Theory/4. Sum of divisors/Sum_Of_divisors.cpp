/*
    ***Bismillahir Rahmanir Rahim***
    date---: "23-05-2022"
    time---: "20-35-20"
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

    map<int, int> m;

    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            m[i]++;
            n /= i;
        }
    }

    if(n > 1) m[n]++;

    double sum = 1, v;

    for(auto x : m)
    {
        
        sum *= ((pow(x.first, (x.second + 1)) - 1) / (x.first - 1));

    }
    cout << sum << endl;

    return 0;
 
}