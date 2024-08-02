/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-08-2022"
    time---: "19-35-16"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

string getPalindorm(string s)
{
    int Size = s.size();

    map<char, int> m;

    for (int i = 0; i < Size; i++)
    {
        m[s[i]]++;
    }

    int oddCount = 0;
    char oddChar;

    for(auto x : m)
    {
        if(x.second % 2 !=  0)
        {
            oddChar = x.first;
            oddCount++;
        }
    }

    if(oddCount > 1 || (oddCount == 1 && (Size % 2 == 0))) return "Not Palindorm";
    
    string firstHalf = "", secondHalf = "";
    for(auto x : m)
    {
        string s(x.second / 2, x.first);
        firstHalf += s;
        secondHalf = s + secondHalf;

        // cout << s << endl;
        // cout << x.first << " " << x.second << endl;
    }

    if(oddCount == 1) return firstHalf + oddChar + secondHalf;
    return firstHalf + secondHalf;
    
}
 
int main()
{
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    string s;
    cout << "Enter your Input: ";
    cin >> s;


    cout << getPalindorm(s) << endl;

    return 0;
 
}