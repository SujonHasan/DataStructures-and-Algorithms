/*
    ***Bismillahir Rahmanir Rahim***
    date---: "25-06-2022"
    time---: "20-27-09"
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

    for (int i = 0; i < size; i++)
    {
        sum += (s[i] - '0');
    }

    if(sum % 3 == 0) cout << "This Number Divisible by 3\n";
    else cout << "This Number not divisible by 3\n";
    
    if(sum % 9 == 0) cout << "This Number Divisible by 9\n";
    else cout << "This Number not divisible by 9\n";

    return 0;
 
}