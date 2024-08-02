/*
    ***Bismillahir Rahmanir Rahim***
    date---: "30-09-2021"
    time---: "16-34-15"
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
 
int main()
{
    Faster();

    int n, start, end;

    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> start >> end;

        v.push_back({end, start});
    }
    
    sort(v.begin(), v.end());

    // for(auto i : v)
    // {
    //     cout << i.second << " " << i.first << endl;
    // }

    int top = 0;
    vector<pair<int, int>> ans;
    ans.push_back({v[0].second, v[0].first});

    for (int i = 1; i < n; i++)
    {
        if(v[i].second >= v[top].first)
        {
            top = i;
            ans.push_back({v[i].second, v[i].first});
        }
    }

    cout << ans.size() << endl;

    for(auto k : ans)
    {
        cout << k.first << " " << k.second << endl;
    }
    

    return 0;
 
}