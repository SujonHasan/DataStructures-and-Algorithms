/*
    ***Bismillahir Rahmanir Rahim***
    date---: "02-11-2021"
    time---: "19-21-18"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

int dp[20][20];
 
int main()
{

    int n, amount;

    cin >> n >> amount;

    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

        for (int j = 0; j <= amount; j++)
        {
            if(coins[0] > j) dp[0][j] = 0;
            else if(coins[0] == j) dp[0][j] = 1;
            else if(dp[0][j - coins[0]] != 0)
            {
                dp[0][j] = 1 + dp[0][j - coins[0]];
            }
            else dp[0][j] = 0;
        }       
    

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            if(coins[i] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else{

                dp[i][j] = min(dp[i - 1][j], (1 + dp[i][j - coins[i]]));

            }
        }
        
    }

    // // display dp

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            cout << dp[i][j] << " ";
        }

        cout << endl;
        
    }

    cout << "Minimum number of coins = " << dp[n-1][amount] << endl;

    return 0;
 
}