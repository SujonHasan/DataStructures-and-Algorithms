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
bool vis[N];

void dfs(int u){

    vis[u] = true;

    for(auto x : g[u])
    {
        if(!vis[x]) dfs(x);
    }
}

const int N = 105;

vector<int> g[N];
bool vis[N];

void dfs(int u){
    vis[u] = true;
    for(auto x : g[u])
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
        int u, v;

        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // /// check connected and disconnect graph
    // dfs(1);
    // for (int i = 1; i <= n; i++)
    // {
    //     if(!vis[i])
    //     {
    //         cout <<"Disconnected" << endl;
    //         return 0;
    //     }
    // }
    // cout <<"Connected" << endl;

    
    // check connected component

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ans++;
        }
    }
    
    cout << "Connected component = " << ans << endl;


    return 0;
 
}