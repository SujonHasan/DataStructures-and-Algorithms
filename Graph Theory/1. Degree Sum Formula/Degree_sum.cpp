/*
    ***Bismillahir Rahmanir Rahim***
    date---: "10-11-2022"
    time---: "22-26-08"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 105;

vector<int> g[N];
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int n, m;

    cin >> n >> m;

    int edge = m;

    while (m--)
    {
        int u, v;

        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    /// formula 
    // cout << 2 * edge<< endl;

    /// without formula
    int sum = 0;
    for(auto x : g){

        sum += x.size();
    }
    cout << sum << endl;

    return 0;
 
}