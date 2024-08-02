/*
    ***Bismillahir Rahmanir Rahim***
    date---: "03-09-2022"
    time---: "20-52-05"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int p1 = 137, p2 = 277;
const int mod1 = 1e9 + 7, mod2 = 1e9 + 9;
const int N = 1e5 + 9;
int pw1[N], pw2[N];

void prec()
{
    pw1[0] = 1;
    for (int i = 1; i < N; i++)
    {
        pw1[i] = 1LL * pw1[i - 1] * p1 % mod1;
    }
    pw2[0] = 1;
    for (int i = 1; i < N; i++)
    {
        pw2[i] = 1LL * pw2[i - 1] * p2 % mod2;
    }
}

pair<int,int> getHash(string s)
{
    int size = s.size();

    int hs1 = 0;
    for (int i = 0; i < size; i++)
    {
        hs1 += 1LL * s[i] * pw1[i] % mod1;
        hs1 %= mod1;
    }
    int hs2 = 0;
    for (int i = 0; i < size; i++)
    {
        hs2 += 1LL * s[i] * pw2[i] % mod2;
        hs2 %= mod2;
    }

    return {hs1, hs2};

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