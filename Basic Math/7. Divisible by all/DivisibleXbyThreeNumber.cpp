/*
    ***Bismillahir Rahmanir Rahim***
    date---: "25-06-2022"
    time---: "22-29-02"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int x, a, b, c;

    cin >> x >> a >> b >> c;

    int LCM = a / (__gcd(a, b)) * b;
    LCM = LCM / (__gcd(LCM, c)) * c;

    if(x % LCM == 0) cout << "X divisible by this three number\n";
    else cout <<"Sad\n";

    return 0;
 
}