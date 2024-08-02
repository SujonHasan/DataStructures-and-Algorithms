/*
    ***Bismillahir Rahmanir Rahim***
    date---: "11-05-2022"
    time---: "21-38-17"
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

void SieveOfEratosthenes(int n)
{
    bool F[n + 1];
    RESET(F, true);

    vector<int> prime;

    for (int i = 2; i * i  <= n; i++)
    {
        if(F[i])
        {
            // prime.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                F[j] = false;
            }  
        }
    }

    // for(auto x : prime) cout << x << " ";
    // cout << endl;

    for (int i = 2; i <= n; i++)
    {
        if(F[i])
        {
            prime.push_back(i);
        }
    }

    for(auto x : prime) cout << x << " ";

    cout << endl;
    

}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;

    cin >> n;

    SieveOfEratosthenes(n);

    return 0;
 
}