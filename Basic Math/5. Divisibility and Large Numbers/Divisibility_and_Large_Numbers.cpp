/*
    ***Bismillahir Rahmanir Rahim***
    date---: "25-06-2022"
    time---: "21-05-49"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    int a;

    cin >> s >> a;

    int size = s.size();
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans * 10LL % a + (s[i] - '0') % a;
    }
    
    if(!ans) cout << "This Number is Divisible by " << a << endl;
    else cout << "sad" << endl;

    return 0;
 
}