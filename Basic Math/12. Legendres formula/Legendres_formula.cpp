/*
    ***Bismillahir Rahmanir Rahim***
    date---: "28-06-2022"
    time---: "18-37-40"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int N  = 1e7 + 2;
bool sieve[N + 1];
vector<int> prime;
void sievePrime()
{
    sieve[0] = sieve[1] = 1;
    for (int i = 2; i * i <= N; i ++)
    {
        if(!sieve[i])
        {
            for (int j = i * i; j <= N; j += i) sieve[j] = 1;
        }
    }
    for (int i = 2; i <= N; i ++)
    {
        if(!sieve[i])prime.push_back(i);
    }
}

void Legendres(ll n, ll p)
{
    ll ans = 0, temp = p;

    while ((n / p) > 0)
    {
        ans += (n / p);
        p *= temp;
    }
    
    cout << ans << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll n , p;

    cin >> n >> p;

    Legendres(n, p);

    return 0;
}