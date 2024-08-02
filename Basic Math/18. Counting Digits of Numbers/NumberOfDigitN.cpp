/*
    ***Bismillahir Rahmanir Rahim***
    date---: "30-06-2022"
    time---: "12-14-16"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;

    cin >> n;

    int count = 0;

    while (n > 0)
    {
        // int rem = n % 10;
        n /= 10;
        count++;
    }
    
    cout << "Number of Digit = " << count << endl;
 
    return 0;
 
}