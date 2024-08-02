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

void display(int n)
{
    cout << "List Graph:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";

        for (int j = 0; j < g[i].size() ; j++)
        {
            cout << g[i][j] << " ";
        }
        
        cout << endl;
    }
    
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int n, m;

    cin >> n >> m;

    while (m--)
    {
        int u, v;

        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    display(n);

    return 0;
 
}