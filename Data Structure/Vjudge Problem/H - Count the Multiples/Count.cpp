
#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
#define lc (n << 1)
#define rc (n << 1) + 1
const int N = 1e5 + 9;
const ll mx = 9223372036854775807;
int a[N];
ll lazy[N*4];
vector<pair<ll,ll>> t(N*4);

void pull(int n)
{
    t[n].first = t[lc].first + t[rc].first;
    t[n].second = (t[lc].second + t[rc].second);
}

void push(int n, int b, int e)
{
    if(lazy[n] == 0) return;

    int value = (e - b) + 1;
    t[n].first = t[n].first + value;
    int d = t[n].first / 3;

    if(d >= value)
    {
        // int md = t[n].first % d;
        // if(md == 0 || value == 1){

        //     t[n].second += d;
        // }
        // else {

        //     d -= md;

        //     t[n].second += d;
        // }

        t[n].second += d;
    }

    if(b != e)
    {
        lazy[lc] = lazy[lc] + lazy[n];
        lazy[rc] = lazy[rc] + lazy[n];
    }
    lazy[n] = 0;
}

void update(int n, int b, int e, int i, int j){

    push(n, b, e);

    if(j < b || e < i) return;

    if(i <= b && e <= j){

        lazy[n] = 1;
        push(n, b, e);
        return;
    }

    int mid = (b + e) / 2;
    update(lc, b, mid, i, j);
    update(rc, mid + 1, e, i, j);
    pull(n);
}

int combine(int a, int b)
{
    return a + b;
}

int query(int n, int b, int e, int i, int j){

    push(n, b, e);

    if(j < b || e < i) return 0;

    if(i <= b && e <= j)
    {
        return t[n].second;
    }

    int mid = (b + e) / 2;

    return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));

}
 
int main()
{
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int tt;
    cin >> tt;

    while (tt--)
    {
        
        int n, m;

        cin >>n >> m;


        while (m--)
        {
            int q;
            cin >> q;

            if(q == 0){

                int l, r;
                cin >> l >> r;
                l++;
                r++;

                update(1, 1, n, l, r);
                // ll value = query(1,1,n,1, n);
            }
            else{

                int l, r;
                cin >> l >> r;
                l++, r++;

                cout << query(1, 1, n, l, r) << endl;

            }

            cout << "t = " << endl;
            for (int i = 1; i <= n * 4; i++)
            {
                cout << t[i].first << " ";
            }
            cout << endl;
            for (int i = 1; i <= n * 4; i++)
            {
                cout << t[i].second << " ";
            }
            
        }
    }
    

    return 0;
 
}