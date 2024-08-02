/*
    ***Bismillahir Rahmanir Rahim***
    date---: "19-11-2021"
    time---: "22-34-40"
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

    int a[] = {12, 10, 6, 5, 3, 2};

    auto it = upper_bound(a, a + 7, 9);
    auto lowIt = lower_bound(a, a + 7, 9);

    cout << "Upper bound = " << *it << endl;
    cout << "Upper bound index = " << (it - a) << endl;
    cout << "Lower bound = " << *lowIt << endl;
    cout << "Lower bound  index= " << lowIt - a << endl;

    return 0;
}