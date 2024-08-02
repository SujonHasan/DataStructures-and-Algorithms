/*
    ***Bismillahir Rahmanir Rahim***
    date---: "28-11-2022"
    time---: "15-09-00"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 1e5 + 9, mod = 1e9 + 7;

int ways[N];

int count(int i)
{
    if(i == 1) return 1;
    if(i == 2) return 1;
    if(i == 3) return 2;
    if(ways[i] != -1) return ways[i];

   return ways[i] = (count(i -1) + count(i - 3)) % mod;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int n;

    cin >> n;

    memset(ways, -1, sizeof ways);

    cout << count(n) << endl;
 
    return 0;
 
}