/*
    ***Bismillahir Rahmanir Rahim***
    date---: "19-06-2022"
    time---: "15-43-56"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define Faster()  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int Eulers_totient_function(int n)
{
    int result = n;

    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            result -= (result / i);   
        }
    }

    if(n > 1) result -= (result / n);
    return result;
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;

    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        cout << phi(n) << endl;
    }
    
    return 0;
 
}