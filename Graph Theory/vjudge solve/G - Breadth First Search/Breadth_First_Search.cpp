/*
    ***Bismillahir Rahmanir Rahim***
    date---: "13-11-2022"
    time---: "20-04-10"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 105;

vector<int> adj[N];
bool vis[N]; int dis[N];
queue<int> q;

void BFS(){

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0; i < adj[u].size(); i++)
        {
            int node = adj[u][i];
            if(!vis[node])
            {
                q.push(node);
                dis[node] = dis[u] + 1;
                vis[node] = true;
            }
        }
    }
}

 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, u, k , v;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> u >> k;
        while (k--)
        {
            cin >> v;
            adj[u].push_back(v);
        }
    }

    q.push(1), vis[1] = true, dis[1] = 0;
    BFS();

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";

        if(vis[i]) cout << dis[i] << endl;
        else cout << -1 << endl;
    }
    
    return 0;
 
}