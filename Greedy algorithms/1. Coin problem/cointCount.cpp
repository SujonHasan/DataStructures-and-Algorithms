/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-09-2021"
    time---: "16-02-59"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{

    int n, value;

    cin >> n >> value;

    vector<int> a(n);
    for(auto &k : a) cin >> k;

    vector<int> v;

    for (int i = n-1; i >= 0; i--)
    {
        while (value >= a[i])
        {
            value -= a[i];
            v.push_back(a[i]);
        }
        
    }

    if(value != 0)

    cout << v.size() << endl;
    for(auto i : v)
    {
        cout << i << " ";
    }
 
    return 0;
 
}