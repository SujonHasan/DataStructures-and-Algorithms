/*
    ***Bismillahir Rahmanir Rahim***
    date---: "30-06-2022"
    time---: "13-52-57"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 

int largest1GcdSubset(vector<int> v)
{
    int GCD = v[0];
    int Size = v.size();

    for (int i = 1; i < Size; i++)
    {
        GCD = __gcd(GCD, v[i]);
    }

    if(GCD == 1) return Size;
    else return -1;
    
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);

    for(auto &x : v) cin >> x;

    cout << largest1GcdSubset(v) << endl;
 
    return 0;
 
}