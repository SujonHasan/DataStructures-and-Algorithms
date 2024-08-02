/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-06-2022"
    time---: "08-48-46"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
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
         if(!sieve[i]) prime.push_back(i);
     }
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    sievePrime();

    int n;

    cin >> n;

    int ans = 1, count;

    for (int i = 2; n > 1; i++)
    {
        if(n % i == 0)
        {
            count = 0;

            while (n % i == 0)
            {
                count++;
                n /= i;
            }

            if(i != 2) ans *= (count + 1); 
            
        }       
    }

    cout <<"Number of Odd Divisors = " << ans << endl;

    return 0;
 
}