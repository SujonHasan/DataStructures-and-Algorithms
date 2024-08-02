/*
    ***Bismillahir Rahmanir Rahim***
    date---: "20-07-2022"
    time---: "17-49-17"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

int dp[50][50];
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, amount;

    cout << "Enter number of coin and amount : ";
    cin >> n >> amount;

    int coins[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> coins[i];
    }

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            dp[i][j] = dp[i-1][j];

            if(j >= coins[i]) dp[i][j] = dp[i][j] || dp[i-1][j - coins[i]];
        }
        
    }
    

    if(dp[n][amount])
    {
        cout << "YES\n";

        int i = n, j = amount;

        while (i && j)
        {
            if(dp[i-1][j])
            {
                i--;
                continue;
            }

            if(i != n && j != amount) cout << " ";

            cout << coins[i];
            j -= coins[i];
            i--;
        }cout << endl;
        
    }
    else cout << "NO\n";
    


 
    return 0;
 
}