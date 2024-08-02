/*
    ***Bismillahir Rahmanir Rahim***
    date---: "16-11-2022"
    time---: "12-43-48"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 105;

vector<int> adj[N];
bool vis[N];
int Sdis[N], Edis[N];
queue<int> q;

void bfs(int dis[]){

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto x : adj[u])
        {
            if(!vis[x]){

                dis[x] = dis[u] + 1;
                vis[x] = true;
                q.push(x);
            }
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n, r, u, v, s, d;
        cin >> n >> r;
        
        while (r--)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cin >> s >> d;

        q.push(s), vis[s] = true, Sdis[s] = 0;
        bfs(Sdis);

        // cout << "S dis = ";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << Sdis[i] <<" ";
        // }
        // cout << endl;
        

        memset(vis, false, N);
        q.push(d), vis[d] = true, Edis[d] = 0;
        bfs(Edis);

        // cout << "D dis = ";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << Edis[i] <<" ";
        // }
        // cout << endl;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans = max(ans, (Sdis[i] + Edis[i]));
        }
        
        cout << "Case " << i <<": " << ans << endl;

        memset(Sdis, 0 , N);
        memset(Edis, 0, N);
        memset(vis, false, N);
        for (int i = 0; i < N; i++)
        {
            adj[i].clear();
        }
        
        
    }
    


 
    return 0;
 
}