/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-11-2022"
    time---: "21-33-17"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 55;

int f[N];

int fibbonacci(int i)
{
    if(i == 0) return 0;
    if(i == 1) return 1;

    return fibbonacci(i -1) + fibbonacci(i - 2);
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;

    cin >> n;

    cout << fibbonacci(n) << endl;
 
    return 0;
 
}