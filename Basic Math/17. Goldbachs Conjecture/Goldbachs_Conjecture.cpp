/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-06-2022"
    time---: "09-15-04"
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

    int n, a, b;
    bool flag = false;

    cin >> n;

    for (int i = 0; prime[i] <= n / 2; i++)
    {
        a = prime[i];
        b = n - a;

        if(!sieve[b])
        {
            flag = true;
            break;
        }
    }
    
    if(flag) cout <<"Sum of two prime = " << a << " " << b << endl;
    else cout << "Sad" << endl;
 
    return 0;
 
}

