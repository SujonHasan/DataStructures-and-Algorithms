
#include <bits/stdc++.h>
 
using namespace std;

#define lc (node << 1)
#define rc ((node << 1) + 1)
#define mid ((b + e) >> 1)

const int N = 2e5 + 9;
int a[N];
int t[N * 4] = {0};
int mn;

void pull(int node, int level)
{
    t[node] = ((mn - level) & 1) ? (t[lc] ^ t[rc]) : (t[lc] | t[rc]);
}

void build(int node, int b, int e,int level)
{
    if(b == e)  
    {
        t[node] = a[b];
        return;
    }

    build(lc, b, mid, level + 1);
    build(rc, mid + 1, e, level + 1);
    pull(node, level);
}


void upd(int node, int b, int e, int i, int x, int level)
{
    if(b > i or e < i) return;

    if(b == e and b == i)
    {
        t[node] = x;
        return;
    }

    upd(lc, b, mid, i , x, level + 1);
    upd(rc, mid + 1, e, i , x, level + 1);
    pull(node, level);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m;

    cin >> n >> m;

    mn = n;

    n = (1 << n);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    build(1, 1, n, 1);

    while (m--)
    {
        int x, v;
        cin >> x >> v;

        upd(1, 1, n, x, v, 1);
        cout << t[1] << endl;
    }    
 
    return 0;
 
}