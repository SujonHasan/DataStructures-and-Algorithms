/*
    ***Bismillahir Rahmanir Rahim***
    date---: "10-11-2022"
    time---: "23-40-26"
    Author-: Sujon Hasan
*/
 
// #include <bits/stdc++.h>
#include <iostream>
 
using namespace std;

const int N = 105;
int g[N][N];
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int n, temp;

    cin >> n;
    temp = n;

    while (n--)
    {
        int u, k, node;
        cin >> u >> k;

        while(k--)
        {
            cin >> node;
            g[u][node] = 1;
        }
    }
    

    for (int i = 1; i <= temp; i++)
    {
        for (int j = 1; j <= temp; j++)
        {
            cout << g[i][j];
            if(j < temp) cout << " ";
        }
        cout << endl;
        
    }
 
    return 0;
 
}