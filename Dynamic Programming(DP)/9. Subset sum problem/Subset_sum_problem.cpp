/*
    ***Bismillahir Rahmanir Rahim***
    date---: "04-11-2021"
    time---: "17-59-31"
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

int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    cout << "Enter number of set & sum : " << endl;

    int n, sum;

    cin >> n >> sum;

    int a[n];

    for (auto &x : a)
        cin >> x;

    int dp[n][sum + 1];

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= sum; i++)
    {
        if (i == a[0]) dp[0][i] = 1;
        else dp[0][i] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (a[i] > j)
                dp[i][j] = dp[i - 1][j];
            else if (a[i] == j)
                dp[i][j] = 1;
            else if (dp[i - 1][j] == 1)
                dp[i][j] = 1;
            else if (dp[i - 1][j - a[i]] == 1)
                dp[i][j] = 1;
            else
                dp[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            cout << dp[i][j] << " ";
        }

        cout << endl;
    }

    cout << "sum of subset Exist = " << dp[n - 1][sum] << endl;

    return 0;
}