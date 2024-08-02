/*
    ***Bismillahir Rahmanir Rahim***
    date---: "04-11-2021"
    time---: "19-40-18"
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

    string s1, s2;

    cin >> s1 >> s2;

    int len1 = s1.size();
    int len2 = s2.size();

    int dp[len1 + 1][len2 + 1];

    for (int i = 0; i <= len1; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= len2; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (s1[i] == s2[j])
            {
                dp[i + 1][j + 1] = 1 + dp[i][j];
            }
            else
            {
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }

    for (int i = 0; i <= len1; i++)
    {
        for (int j = 0; j <= len2; j++)
        {
            cout << dp[i][j] << " ";
        }

        cout << endl;
    }

    cout << "longest common subsequence = " << dp[len1][len2] << endl;

    return 0;
}