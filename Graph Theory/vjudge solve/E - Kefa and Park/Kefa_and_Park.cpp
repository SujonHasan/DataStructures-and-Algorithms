
#include <bits/stdc++.h>
 
using namespace std;

const int N = 1e5 + 7;

vector<int> adj[N];
vector<int> a(N);
int ans = 0, n, m;

void dfs(int u, int p, int C, int mxC){

    if(a[u]) C++;
    else C = 0;

    mxC = max(mxC, C);

    int Cchild = 0;

    for(auto x : adj[u])
    {
        if(x != p){

            dfs(x, u, C, mxC);
            Cchild++;
        } 
    }

    if(Cchild == 0 && mxC <= m) ans++;

}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    dfs(1, -1, 0, 0);
    cout << ans << endl;

    return 0;
 
}