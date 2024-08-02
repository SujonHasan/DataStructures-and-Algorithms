/*
    ***Bismillahir Rahmanir Rahim***
    date---: "03-09-2022"
    time---: "20-52-05"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int p = 137;
const int mod = 1e9 + 7;
const int N = 1e5 + 9;
int pw[N];

void prec()
{
    pw[0] = 1;

    for (int i = 1; i < N; i++)
    {
        pw[i] = 1LL * pw[i - 1] * p % mod;
    }
}

int getHash(string s)
{
    int size = s.size();

    int hs = 0;
    for (int i = 0; i < size; i++)
    {
        hs += 1LL * s[i] * pw[i] % mod;
        hs %= mod;
    }

    return hs;
    
}

 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    prec();

    string a, b;
    cout <<"Enter your two number: " << endl;
    cin >> a >> b;

    // cout << "a = " << getHash(a) << " b = " << getHash(b) << endl;
    if(getHash(a) == getHash(b)) cout <<"Yes" << endl;
    else cout << "No" << endl;
 
    return 0;
 
}