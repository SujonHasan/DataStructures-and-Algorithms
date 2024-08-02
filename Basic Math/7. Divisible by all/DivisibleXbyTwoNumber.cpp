/*
    ***Bismillahir Rahmanir Rahim***
    date---: "25-06-2022"
    time---: "21-48-37"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

int is_gcd(int a, int b)
{
    if(a == 0) return b;

    return is_gcd(b % a, a);
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int x , a , b;

    cin >> x >> a >> b;

    int GCD = is_gcd(a, b);
    
    int LCM = (b / GCD) * a;

    if(x % LCM == 0) cout <<"This is Possible\n";
    else cout <<"Sad\n";
 
    return 0;
 
}