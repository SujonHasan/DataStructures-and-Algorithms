/*
    ***Bismillahir Rahmanir Rahim***
    date---: "07-11-2021"
    time---: "18-41-34"
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

    int n;

    cin >> n;

    int a[n];

    for (auto &x : a)
        cin >> x;

    stack<int> s;

    s.push(a[0]);

    for (int i = 1; i < n; i++)
    {
        if (s.top() < a[i])
        {
           s.push(a[i]);

        }
        else
        {

            while (s.top() > a[i] && s.size() > 1)
            {
                s.pop();
            }

            s.push(a[i]);
        }
    }

    cout << s.top() << endl;

    return 0;
}