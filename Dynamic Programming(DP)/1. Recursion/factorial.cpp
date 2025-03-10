/*
    ***Bismillahir Rahmanir Rahim***
    date---: "19-11-2022"
    time---: "20-06-36"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

int factorial(int n)
{
    if(n == 1) return 1;
    return n * factorial(n-1);
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;

    cout<< factorial(n) << endl;
 
    return 0;
 
}