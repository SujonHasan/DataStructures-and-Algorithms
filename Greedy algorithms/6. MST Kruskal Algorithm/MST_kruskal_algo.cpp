/*
    ***Bismillahir Rahmanir Rahim***
    date---: "14-10-2021"
    time---: "10-13-12"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define Faster()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define RESET(a,x)   memset(a,x,sizeof(a))
#define ll           long long
#define ull          unsigned long long
#define ui           unsigned int
#define MAX(a, b)    a = max(a, b);
#define MIN(a, b)    a = min(a, b);
#define cout(a)      cout << a << endl;
#define fZero        __builtin_clz
#define lZero        __builtin_ctz
#define setCount     __builtin_popcount

#define MX 100
vector<pair<int, pair<int, int>>> graph;
int parent[MX];
int nodes, edgs;

void initMakeSet()
{
    for (int i = 0; i < MX; i++)
    {
        parent[i] = i;
    }   
}

int Find(int u)
{
    if(parent[u] == u) return u;
    return parent[u] = Find(parent[u]); // path compression
}

void UnoinSet(int u, int v)
{
    int p = Find(u);
    int q = Find(v);

    if(p != q)
    {
        parent[q] = p;
    }
}

bool isFriend(int u , int v)
{
    int p = Find(u);
    int q = Find(v);

    return (p != q);
}

int kruskal()
{
    int a, b, cost, minimum_cost = 0;

    cout << "Disjoint set kruskal graph = \n";
    for (int i = 0; i < edgs; i++)
    {
        a = graph[i].second.first;
        b = graph[i].second.second;
        cost = graph[i].first;

        if(isFriend(a, b))
        {
            minimum_cost += cost;
            cout << a << " " << b << " " << cost << endl;
            UnoinSet(a, b);

        }
    }

    // just parent check 
    // cout << Find(3) << " " << Find(4) << endl; 
    // cout << Find(1) << " " << Find(2) << endl; 
    // cout << Find(0) << " " << Find(5) << endl; 

    return minimum_cost;

}

void displayGraph()
{
    cout << "\nSort path Graph..." << endl; 
    for (auto i : graph)
    {
        cout << i.second.first << " " << i.second.second << " " << i.first << endl;
    }
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    cin >> nodes >> edgs;

    int u, v, cost;

    for (int i = 0; i < edgs; i++)
    {
        cin >> u >> v >> cost;

        graph.push_back({cost, {u, v}});

        // graph[i].first = cost;
        // graph[i].second.first = u;
        // graph[i].second.second = v;
        
    }

    sort(graph.begin(), graph.end());

    initMakeSet();

    displayGraph();

    int minimunCost = kruskal();    
    cout << "minimum cost spenning tree cost = " << minimunCost << endl;

    return 0;
 
}