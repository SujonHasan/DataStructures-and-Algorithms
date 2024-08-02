/*
    ***Bismillahir Rahmanir Rahim***
    date---: "11-06-2021"
    time---: "19-28-39"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
// #define Faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); // cin cout code faster
#define RESET(a,x)    memset(a,x,sizeof(a)) //set elements of array / character to some value
#define lli         long long int
#define ull         unsigned long long
#define ui          unsigned int
#define MAX(a, b)   a = max(a, b); // maximum number return
#define MIN(a, b)   a = min(a, b); // minimum number return
#define cout(a)     cout << a << endl;

void print_graph(vector<int> graph[], int n)
{
    cout << "Graph is = \n";
    for (int i = 0; i < n; i++)
    {
        cout << i << "-> ";

        for (int j = 0; j < graph[i].size() ; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
        
    }
    
}
 
int main()
{
    // Faster();

    int node, edge;

    cout << "Enter node and edge = ";

    cin >> node >> edge;

    vector<int> graph[node];

    for (int i = 0; i < edge; i++)
    {
        int u, v;

        cin >> u >> v;

        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    
    print_graph(graph, node);
 
    return 0;
 
}