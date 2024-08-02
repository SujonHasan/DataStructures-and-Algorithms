/*
    ***Bismillahir Rahmanir Rahim***
    date---: "25-06-2022"
    time---: "20-14-17"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    int a;

    cin >> s;

    int size = s.size();

    int last_digit = (s[s.size()-1] - '0');

    if(last_digit % 2 == 0) cout << "This number divisible by 2\n";
    else cout << "This Number not Divisible by 2\n";

    if(last_digit % 5 == 0) cout << "This number divisible by 5\n";
    else cout << "This Number not Divisible by 5\n";

    return 0;
 
}