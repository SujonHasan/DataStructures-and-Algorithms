/*
    ***Bismillahir Rahmanir Rahim***
    date---: "13-11-2022"
    time---: "14-54-18"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
const int N = 105;
vector<int> adj[N];
bool vis[N]; int dis[N], par[N];
queue<int> q;

void BFS()
{
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
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

    for (int i = 1; i <= n; i++)
    {
        cout << dis[i] << " ";
    }
    cout << endl;

    int p = n;

    while (p != 1)
    {
        cout << p << ' ';
        p = par[p];
    }
    cout << 1 << endl;
    
    return 0;
 
}