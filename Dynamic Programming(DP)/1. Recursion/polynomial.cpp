/*
    ***Bismillahir Rahmanir Rahim***
    date---: "19-11-2022"
    time---: "19-56-02"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

int polynomial(int x, int n)
{
    if(n == 0) return 1;

    return pow(x, n) + polynomial(x, n-1);
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, x;
    cin >> x >> n;

    cout << polynomial(x, n-1) << endl;
 
    return 0;
 
}