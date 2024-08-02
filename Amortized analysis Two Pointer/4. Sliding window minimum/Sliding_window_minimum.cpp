/*
    ***Bismillahir Rahmanir Rahim***
    date---: "07-11-2021"
    time---: "19-43-58"
    Author-: Sujon Hasan
*/

#include <bits/stdc++.h>
#include <conio.h>

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

    deque<int> s;

    for (int i = 0; i < n - 3; i++)
    {
        while (!s.empty())
        {
            cout << s.front() << " ";
            s.pop_front();
        }
        if(i) cout << endl;

        s.push_front(a[i]);

        for (int j = i + 1; j <= i + 3; j++)
        {
            if (a[j] > s.back())
                s.push_back(a[j]);
            else
            {

                while (s.back() > a[j] && !s.empty())
                {
                    s.pop_back();
                }

                s.push_back(a[j]);
            }
        }

        cout << "i = " << i << endl;

    }

    cout << "Last minimum window : ";

    while (!s.empty())
    {
        cout << s.front() << " ";
        s.pop_front();
    }

    return 0;
}