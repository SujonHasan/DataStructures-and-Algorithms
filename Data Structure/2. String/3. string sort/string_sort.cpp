/*
    ***Bismillahir Rahmanir Rahim***
    date---: "08-04-2021"
    time---: "14-38-20"
    Author-: Sujon Hasan
*/

#include <iostream>
#include <algorithm>

using namespace std;

void Sort()
{
    string s;

    cin >> s;

    sort(s.begin(), s.end()); // string sorting algorithm library

    cout << s << endl;
}

int main()
{
    Sort();

    return 0;
}