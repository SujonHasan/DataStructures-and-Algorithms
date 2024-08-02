/*
    ***Bismillahir Rahmanir Rahim***
    date---: "25-06-2022"
    time---: "20-35-20"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;

    cin >> s;

    int digit = (s[s.size()-2] - '0') * 10;
    digit += (s[s.size()- 1] - '0');

    if(digit % 4 == 0) cout << "This Number Divisible by 4\n";
    else cout << "This Number not Divisible by 4\n";
 
    return 0;
 
}