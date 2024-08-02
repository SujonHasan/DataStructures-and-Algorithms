/*
    ***Bismillahir Rahmanir Rahim***
    date---: "13-11-2022"
    time---: "13-20-48"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 105;

int s[N], e[N];
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, a, b, c, rev = 0, total = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        if(s[a] || e[b])
        {
            rev += c;
            s[b] = 1;
            e[a] = 1;
        }else{

            s[a] = 1;
            e[b] = 1;
        }
        
        total += c;
    }
        
    cout << min(total - rev, rev) << endl;
 
    return 0;
 
}