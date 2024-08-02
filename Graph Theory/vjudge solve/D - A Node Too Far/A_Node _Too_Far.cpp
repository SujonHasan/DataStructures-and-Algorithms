/*
    ***Bismillahir Rahmanir Rahim***
    date---: "14-11-2022"
    time---: "20-13-03"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 105;

vector<int> adj[N];
int vis[N];
int dis[N];
queue<int> q;
int n, a, b;

void BFS()
{
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto x : adj[u])
        {
            int d = dis[u] + 1;
            if(!vis[x] && d <= b)
            {
                q.push(x);
                vis[x] = 1;
                dis[x] = d;
            }
        }
        
    }
    
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int u, v, Case = 1;

    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            vis[u] = 0;
            vis[v] = 0;
        }

        // memset(adj, 0, N);
        // memset(vis, false, N);
        // memset(dis, 0, N);

        while (cin >> a && cin >> b)
        {
            memset(vis,-1, N);
            memset(dis, 0, N);
            q.push(a), vis[a];
            BFS();

            int ans = 0;

            cout << "v = " ;
            for (int i = 1; i <= N; i++)
            {
                if(vis[i] == 0){
                    cout << vis[i] << " ";
                }
            }
            cout << endl;

            cout << "Case "<< Case << ": " << ans<<" nodes not reachable from node " << a<<" with TTL = "<< b <<"."<< endl;

            // memset(vis, -1, N);
            // memset(dis, 0, N);
            Case++;

        }

        for (int i = 1; i <= n; i++)
        {
            adj[i].clear();
        }
        
    }
    

    


 
    return 0;
 
}