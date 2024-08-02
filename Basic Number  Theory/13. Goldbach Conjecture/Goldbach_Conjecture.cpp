/*
    ***Bismillahir Rahmanir Rahim***
    date---: "20-06-2022"
    time---: "13-40-39"
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

const int N  = 1e7 + 2;

bool sieve[N + 1];
vector<ll> prime;
void sievePrime()
{
    sieve[0] = sieve[1] = 1;
    for (ll i = 2; i * i <= N; i ++)
    {
        if(!sieve[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                sieve[j] = 1;
            }
        }
    }

    for (int i = 2; i <= N; i ++)
    {
        if(!sieve[i])
        {
            prime.push_back(i);
        } 
    } 
}

int main()
{
    // Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sievePrime();

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        ll n, a, b, count = 0;

        cin >> n;

        for (int j = 0; prime[j] <= (n / 2); j++)
        {
            a = prime[j];
            b = n - a;
            if(!sieve[b]) count++;

        }
        
        cout << "Case " << i << ": " << count << endl;
    }
    
    return 0;
 
}