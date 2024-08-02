/*
    ***Bismillahir Rahmanir Rahim***
    date---: "21-10-2021"
    time---: "11-32-54"
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

int n, W, v[1001], w[1001], profit[1001][10001];

void knapsack()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= W; j++)
        {
            if(w[i - 1] > j)
            {
                profit[i][j] = profit[i - 1][j];
            }
            else
            {
                profit[i][j] = max(profit[i-1][j], profit[i- 1][j - w[i - 1]] + v[i-1]);
            }
        }
    }

    cout << "max profit = " << profit[n][W] << endl;

    for(int i = 1; i <= n; i++)
    {
        cout << "Item -> " << i << " = " ;
        for(int j = 0; j <= W; j++)
        {
            cout << profit[i][j] << " ";
        }

        cout << endl;
    }


    // int i = n, j = W;

    // vector<int> ans;

    // while(profit[i][j])
    // {
    //     if(profit[i][j] == profit[i -1][j])
    //     {
    //         i--;
    //     }
    //     else if(profit[i][j] == profit[i][j-1])
    //     {
    //         j--;
    //     }
    //     else
    //     {
    //         ans.push_back(i);
    //         // cout << profit[i][j] << endl;
    //         // cout <<"i = " << i << endl;
    //         // cout << "v[i] " << v[i-1] << endl; 
    //         int x = profit[i][j] - v[i - 1];
    //         // cout << " x = " << x << endl;
    //         i--;
                
    //         // cout << "j = " << j << endl;
            
    //         while(profit[i][j] != x)
    //         {
    //             j--;
    //         }
    //     }
    // }

    // cout << "Item choice -> " ;
    // for(auto x: ans)
    // {
    //     cout << x << " ";
    // }   


}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    // int n, W;

    cout << "Enter your number of item and bag wight: " << endl;
    cin >> n >> W;

    cout << "Enter your profit and wieght : " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i] >> w[i];
    }

    knapsack();
 
    return 0;
 
}