/*
    ***Bismillahir Rahmanir Rahim***
    date---: "25-05-2022"
    time---: "20-14-51"
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

const int N = 1e6 + 9;
int spf[N];

void call_spf()
{
    for (int i = 1; i < N; i++) spf[i] = i;

    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i) spf[j] = min(spf[j], i);
    }
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    call_spf();

    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        vector<int> v;

        while (n > 1)
        {
            v.push_back(spf[n]);
            cout << "spf[n] = " << spf[n] << endl;
            n /= spf[n];
            cout << "n = " << n << endl;

        }
        
        for(auto x : v) cout << x << " ";

        cout << endl;
    }
    
    
    


 
    return 0;
 
}