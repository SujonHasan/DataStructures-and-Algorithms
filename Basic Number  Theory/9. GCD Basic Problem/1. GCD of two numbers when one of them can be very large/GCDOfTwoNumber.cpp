/*
    ***Bismillahir Rahmanir Rahim***
    date---: "30-05-2022"
    time---: "21-52-56"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
#include<conio.h>
 
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

int is_gcd(ll a, ll b)
{
    if(!a) return b;

    return is_gcd(b % a, a);
}

int GCD(ll a, string b)
{
    ll mod = 0;

    for (int i = 0; i < b.size(); i++)
    {
        mod = ( mod * 10LL + (b[i] - '0')) % a;
        // cout << "Mod = " << mod << endl;
        // _getch();
    }

    return is_gcd(a, mod);
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    ll a;
    string s;
    cin >> a >> s;
    cout << GCD(a, s);
 
    return 0;
 
}