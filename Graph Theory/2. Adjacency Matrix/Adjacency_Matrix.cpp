/*
    ***Bismillahir Rahmanir Rahim***
    date---: "10-11-2022"
    time---: "22-02-32"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 105;

int g[N][N];

void display(int n)
{
    cout << "Matrix Graph: " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << g[i][j] << " ";
        }
        cout << endl;
        
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
        g[u][v] = 1;
        g[v][u] = 1;
    }

    display(n);
    
    return 0;
 
}