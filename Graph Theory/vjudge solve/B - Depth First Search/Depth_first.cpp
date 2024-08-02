
#include <bits/stdc++.h>
 
using namespace std;

const int N = 105;

vector<int> g[N];
bool vis[N];
vector<int> Start(N);
vector<int> End(N);
int tvs = 1;


void dfs(int u){

    vis[u] = true;
    Start[u] = tvs++;

    for(auto x : g[u])
    {
        if(!vis[x]) dfs(x);
    }

    End[u] = tvs++;
}


 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int n, temp;

    cin >> n;
    temp = n;

    while (n--)
    {
        int u, k;

        cin >> u >> k;
        
        while (k--)
        {
            int node;
            cin >> node;
            g[u].push_back(node);
        }   
    }

    for (int i = 1; i <= temp; i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }

    for (int i = 1; i <= temp; i++)
    {
        if(vis[i]) cout << i << " " << Start[i] << " " << End[i] << endl;
    }
    
    return 0;
 
}