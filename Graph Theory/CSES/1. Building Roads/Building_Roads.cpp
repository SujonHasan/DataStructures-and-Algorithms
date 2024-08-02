/*
    ***Bismillahir Rahmanir Rahim***
    date---: "11-11-2022"
    time---: "22-01-45"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 1e5 + 7;

vector<int> adj[N];
bool vis[N];

void dfs(int u)
{
    vis[u] = true;

    for(auto x : adj[u])
    {
        if(!vis[x]) dfs(x);
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int ans = 0;
    dfs(1);
    vector<pair<int, int>> result;

    for (int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ans++;
            result.push_back({i-1, i});
        }
    }
    

    cout << ans << endl;
    for(auto x : result) cout << x.first << " " << x.second << endl;
    
    return 0;
 
}