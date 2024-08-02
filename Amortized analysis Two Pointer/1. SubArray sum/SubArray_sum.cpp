/*
    ***Bismillahir Rahmanir Rahim***
    date---: "06-11-2021"
    time---: "17-19-57"
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
    // Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, s;

    cout << "Enter number of array and sum: ";
    cin >> n >> s;
    
    int a[n];
    for (auto &x : a)
        cin >> x;

    int i = 0, sum = a[0], j = 1;

    while (sum != s)
    {
        if (sum + a[j] <= s)
        {
            sum += a[j];
            j++;
        }
        else
        {
            sum -= a[i];
            i++;
        }
    }

    cout << "sum of array index = ";

    for (int k = i; k < j; k++)
    {
        cout << a[k] << " ";
    }

    return 0;
}