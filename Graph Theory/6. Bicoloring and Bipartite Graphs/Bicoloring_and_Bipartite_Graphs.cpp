/*
    ***Bismillahir Rahmanir Rahim***
    date---: "17-11-2022"
    time---: "01-56-50"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 105;

vector<int> adj[N];
bool vis[N], col[N];
bool ok;

bool dfs(int u)
{
    vis[u] = true;

    for(auto x : adj[u])
    {
        if(!vis[x])
        {
            vis[x] = true;
            col[x] = col[u] ^ 1;
            dfs(x);
        }
        else if(vis[x] == vis[u]) ok = false;
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

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i]) dfs(i);
    }
    
    if(ok) cout << "Yes" << endl;
    else cout <<"NO" << endl;
 
    return 0;
 
}