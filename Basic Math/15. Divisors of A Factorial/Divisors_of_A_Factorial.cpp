/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-06-2022"
    time---: "08-04-51"
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
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    sievePrime();

    int n;
    cin >> n;

    ll ans = 1, count;

    for (int i = 0; prime[i] <= n; i++)
    {
        int pow = prime[i];
        count = 0;

        while ((n / pow) > 0)
        {
            count += (n / pow);
            pow *= prime[i];
        }

        ans *= (count + 1); 
    }
    
    cout << "number of divisors of n factorial in = " << ans << endl;
 
    return 0;
 
}