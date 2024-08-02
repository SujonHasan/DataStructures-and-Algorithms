
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define lc (n << 1)
#define rc (n << 1) + 1
const int N = 1e5 + 9;
const int mod = 1e9 + 7;
int a[N];
ll t[N*4], lazy[N*4];
ll mx = 9223372036854775807;

void pull(int n)
{
    t[n] = (t[lc] & t[rc]);
}

ll combine(ll a, ll b)
{
    return (a & b);
}

void push(int n, int b, int e)
{
    if(lazy[n] == 0) return;

    t[n] = (t[n] | lazy[n]);

    if(b != e)
    {
        lazy[lc] = lazy[lc] | lazy[n];
        lazy[rc] = lazy[rc] | lazy[n];
    }
    lazy[n] = 0;
}

void update(int n, int b, int e, int i, int j, ll v){

    push(n, b, e);

    if(j < b || e < i) return;

    if(i <= b && e <= j){

        lazy[n] |= v;
        push(n, b, e);
        return;
    }

    int mid = (b + e) / 2;

    update(lc, b, mid, i, j, v);
    update(rc, mid + 1, e, i, j, v);
    pull(n);
}

ll query(int n, int b, int e, int i, int j){

    push(n, b, e);

    if(j < b || e < i) return mx;

    if(i <= b && e <= j)
    {
        return t[n];
    }

    int mid = (b + e) / 2;

    return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));

}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m;

    cin >>n >> m;

    while (m--)
    {
        int q;
        cin >> q;

        if(q == 1){

            int l, r, v;
            cin >> l >> r >> v;
            l++;

            update(1, 1, n, l, r,v);
        }
        else{

            int l, r;
            cin >> l >> r;
            l++;

            cout << query(1, 1, n, l, r) << endl;

        }

    }

    return 0;
 
}