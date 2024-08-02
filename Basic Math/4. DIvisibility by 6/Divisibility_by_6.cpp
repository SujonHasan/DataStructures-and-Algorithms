/*
    ***Bismillahir Rahmanir Rahim***
    date---: "25-06-2022"
    time---: "20-47-39"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    
    cin >> s;

    int sum = 0, size = s.size();
    int last_digit = s[size - 1];

    for (int i = 0; i < size; i++)
    {
        sum += (s[i] - '0');
    }

    if((sum % 3 == 0) && (last_digit % 2 == 0))
    {
        cout <<"This Number Divisible by 6\n";
    }
    else cout <<"This Number not Divisible by 6\n";

    return 0;
 
}