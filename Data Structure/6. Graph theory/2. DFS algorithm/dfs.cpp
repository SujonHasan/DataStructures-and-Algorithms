/*
    ***Bismillahir Rahmanir Rahim***
    date---: "16-06-2021"
    time---: "20-01-03"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define Faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); // cin cout code faster
#define RESET(a,x)    memset(a,x,sizeof(a)) //set elements of array / character to some value
#define lli         long long int
#define ull         unsigned long long
#define ui          unsigned int
#define MAX(a, b)   a = max(a, b); // maximum number return
#define MIN(a, b)   a = min(a, b); // minimum number return
#define cout(a)     cout << a << endl;

vector<int> graph[5];
bool visited[5];

void graph_display(vector<int> graph[], int n)
{
    cout << "Graph display: \n";

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";

        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
        
    }
    

}

void dfs(int sources)
{
    visited[sources] = 1;

    for (int i = 0; i < graph[sources].size(); i++)
    {
        int next = graph[sources][i];

        if(visited[next] == 0)
        {
            dfs(next);
        }
    }
}
 
int main()
{
    Faster();

    int nodes, edges;

    cin >> nodes >> edges;


    for (int i = 0; i < edges; i++)
    {
        int x, y;

        cin >> x >> y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    graph_display(graph, nodes);
    cout << endl;
    
    dfs(0);
    
    for (int i = 0; i < nodes; i++)
    {
        if(visited[i] == 1)
        {
            cout << "Node " << i << " is visited " << endl;
        }
        else
        {
            cout << "Node " << i << " is not visited" << endl;
        }
    }
     
    return 0;
 
}