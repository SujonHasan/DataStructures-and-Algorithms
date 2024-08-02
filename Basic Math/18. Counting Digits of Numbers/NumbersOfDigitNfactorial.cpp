/*
    ***Bismillahir Rahmanir Rahim***
    date---: "30-06-2022"
    time---: "12-33-12"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int NumberOfDigit(int n)
{
    if(n == 0) return 0;

    if(n == 1) return 1;

    double digit = 0;

    for (int i = 2; i <= n; i++)
    {
        digit += log10(i);
    }
    
    return floor(digit) + 1;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;

    cin >> n;

    int digit = NumberOfDigit(n);

    cout << "Number of Digit = " << digit << endl;
 
    return 0;
 
} 