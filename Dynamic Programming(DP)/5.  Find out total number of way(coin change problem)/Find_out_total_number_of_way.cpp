/*
    ***Bismillahir Rahmanir Rahim***
    date---: "01-11-2021"
    time---: "15-10-52"
    Author-: Sujon Hasan
*/

#include <bits/stdc++.h>

using namespace std;

#define Faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define RESET(a, x) memset(a, x, sizeof(a))
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define MAX(a, b) a = max(a, b);
#define MIN(a, b) a = min(a, b);
#define cout(a) cout << a << endl;
#define fZero __builtin_clz
#define lZero __builtin_ctz
#define setCount __builtin_popcount

int dp[50][50];

int main()
{
    // Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;

    cout << "Enter number of coin: ";
    cin >> n;

    int coins[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> coins[i];
    }

    cout << "Enter your amount : ";
    int amount;
    cin >> amount;

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            if (coins[i] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i]];
            }
        }
    }

    // display dp all value

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
           cout << dp[i][j] << " ";
        }
        cout << endl;

    }

    cout << "Total number of way = " << dp[n][amount] << endl;

    return 0;
}