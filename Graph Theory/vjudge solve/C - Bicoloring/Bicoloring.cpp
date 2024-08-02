/*
    ***Bismillahir Rahmanir Rahim***
    date---: "17-11-2022"
    time---: "01-56-50"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 205;

vector<int> adj[N];
bool vis[N]; int col[N];
bool ok;

void dfs(int u)
{
    vis[u] = true;

    for(auto x : adj[u])
    {
        if(!vis[x])
        {
            col[x] = col[u] ^ 1;
            dfs(x);
        }
        else if(col[x] == col[u]) ok = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m;

    while (1)
    {
        cin >> n >> m;

        if(!n) break;

        while (m--)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        ok = true;
        dfs(0);

        if(ok) cout<< "BICOLORABLE." << endl;
        else cout << "NOT BICOLORABLE." << endl;

        for (int i = 0; i < n; i++)
        {
            adj[i].clear();
        }

        memset(vis, false, N);
        memset(col, 0, N);
        
    }
    
 
    return 0;
 
}