/*
    ***Bismillahir Rahmanir Rahim***
    date---: "28-06-2022"
    time---: "22-50-28"
    Author-: Sujon Hasan
*/
#include <bits/stdc++.h>
using namespace std;

int Trailing_zeroes(int n)
{
    if(n < 0) return -1;

    int count = 0, p = 5;

    while ((n / p) > 0)
    {
        count += (n / p);
        p *= 5;
    }
    
    return count;
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;

    cout << Trailing_zeroes(n) << endl;

    return 0;
 
}