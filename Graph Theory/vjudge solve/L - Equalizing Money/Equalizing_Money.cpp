 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 1e5 + 9;

vector<int> g[N];
bool vis[N];
vector<int> money(N);
int result = 0;
int Count = 0;


void dfs(int u){

    vis[u] = true;
    result  += money[u];
    Count++;

    for(auto x : g[u])
    {
        if(!vis[x]) dfs(x);
    }
}


 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int t;
    cin >> t;
    
    for(int cc = 1; cc <= t; cc++)
    {
        memset(vis, 0, N);
        
        int n, m;

        cin >> n >> m;

        for (int i = 1; i <= n; i++)
        {
            cin >> money[i];
        }
        
        while (m--)
        {
            int u, v;

            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<int> ans;
        bool check = true;

        for (int i = 1; i <= n; i++)
        {
            

            if(!vis[i])
            {
                result = 0;
                Count = 0;
                dfs(i);

                if(result % Count)
                {
                    check = false;
                    break;
                }
                else ans.push_back(result / Count);
            }
        }

        for (int i = 1; i < ans.size(); i++)
        {
            if(ans[i] != ans[i - 1]){
                check = false;
                break;
            }
        }

        if(check) cout <<"Case " << cc << ": Yes" << endl;
        else   cout <<"Case " << cc << ": No" << endl;   

        for (int i = 1; i <= n; i++) g[i].clear();
        
    }

    return 0;
 
}