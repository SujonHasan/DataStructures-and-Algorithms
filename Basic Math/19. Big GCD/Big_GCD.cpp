/*
    ***Bismillahir Rahmanir Rahim***
    date---: "30-06-2022"
    time---: "12-47-25"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void big_Gcd(string s, int b)
{
    ll a = 0, Size = s.size();

    for (int i = 0; i < Size; i++)
    {
        a = (a * 10LL) % b + (s[i] - '0') % b;
    }

    cout << __gcd(a, b) << endl;

}
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    ll b;

    cin >> s >> b;

    big_Gcd(s, b);

    return 0;
 
}