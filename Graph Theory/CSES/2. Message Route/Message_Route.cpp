/*
    ***Bismillahir Rahmanir Rahim***
    date---: "13-11-2022"
    time---: "20-50-37"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 1e5 + 7;

vector<int> adj[N];
bool vis[N]; int dis[N]; int par[N];
queue<int> q;

void BFS()
{
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        // for (int i = 0; i < adj[u].size(); i++)
        // {
        //     int node = adj[u][i];

        //     if(!vis[node])
        //     {
        //         q.push(node);
        //         vis[node] = true;
        //         dis[node] = dis[u] + 1;
        //         par[node] = u;
        //     }
        // }
        
        for(auto x : adj[u])
        {
            if(!vis[x]){
                q.push(x);
                vis[x] = true;
                dis[x] = dis[u] + 1;
                par[x] = u;
            }
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m, u, v;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    q.push(1), vis[1] = true, dis[1] = 0;
    BFS();

    if(!vis[n]) cout << "IMPOSSIBLE" << endl;
    else{

        vector<int> ans;

        int x = n;

        while (x != 1)
        {
            ans.push_back(x);
            x = par[x];
        }
        
        ans.push_back(1);

        cout << ans.size() << endl;
        for (int i = ans.size()-1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        
        cout << endl;
    }

 
    return 0;
 
}