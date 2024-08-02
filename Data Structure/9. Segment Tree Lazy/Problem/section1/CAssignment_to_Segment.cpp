
#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
#define lc (n << 1)
#define rc (n << 1) + 1
const int N = 1e5 + 9;
int a[N];
int t[N*4], lazy[N*4] = {-1};

void push(int n, int b, int e)
{
    if(lazy[n] == -1) return;
    t[n] = lazy[n];

    if(b != e)
    {
        lazy[lc] = lazy[n];
        lazy[rc] = lazy[n];
    }

    lazy[n] = -1;
}

void update(int n, int b, int e, int i, int j, int v){

    push(n, b, e);

    if(j < b || e < i) return;

    if(i <= b && e <= j){

        lazy[n] = v;
        push(n, b, e);
        return;
    }

    int mid = (b + e) / 2;
    update(lc, b, mid, i, j, v);
    update(rc, mid + 1, e, i, j, v);
}

int query(int n, int b, int e, int i)
{

    push(n, b, e);

    if(i < b || e < i) return 0;
    if(i == b && e == i) return t[n];

    int mid = (b + e) / 2;
    if (i <= mid) query(lc, b, mid, i);
    else query(rc, mid + 1, e, i);
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

            int i;
            cin >> i;
            i++;
            cout << query(1, 1, n, i) << endl;
        }
    }

    return 0;
 
}