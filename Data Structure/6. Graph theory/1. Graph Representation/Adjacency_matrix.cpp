/*
    ***Bismillahir Rahmanir Rahim***
    date---: "13-10-2021"
    time---: "20-13-42"
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

int graph[20][20];

void print_graph(int node)
{
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
        
    }
    
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int node, edges;

    cin >> node >> edges;

    // initialize all value is zero.....
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            graph[i][j] = 0;
        }
        
    }

    int u, v;

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;

        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    print_graph(node);

 
    return 0;
 
}