/*
    ***Bismillahir Rahmanir Rahim***
    date---: "18-10-2022"
    time---: "18-52-13"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

#define ll long long

const int N = 1e5 + 9;
int a[N];
int t[4 * N];
 
void build(int node, int b, int e)
{
    if(b == e)
    {
        t[node] = a[b];
        return;
    }

    int l = node * 2, r = (node * 2) + 1;
    int mid = (b + e) / 2;

    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = t[l] + t[r];
}
 
int query(int node, int b, int e, int i, int j)
{
    if(b > j || e < i) return 0;
    if(b >= i && e <= j) return t[node];

    int l = node * 2, r = (node * 2) + 1;
    int mid = (b + e) / 2;

    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
 
void upd(int node, int b, int e, int i, int x)
{
    if(b > i or e < i) return;

    if(b == e and b == i)
    {
        t[node] = x;
        return;
    }

    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;

    upd(l, b, mid, i , x);
    upd(r, mid + 1, e, i , x);
    t[node] = t[l] + t[r];
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;

    cin >> t;

    for(int s = 1; s <= t; s++)
    {
        cout << "Case " << s << ":" << endl;
        int n, m;

        cin >>n >> m;

        int input;

        for (int i = 0; i < n; i++)
        {
            cin >> input;
            a[i] = input;
        }

        build(1, 0, n-1);
        
        while (m--)
        {
            int q;
            cin >> q;

            if(q == 1)
            {
                int x;
                cin >> x;
                cout << query(1, 0, n-1, x, x) << endl;
                upd(1, 0, n-1, x, 0);

            }
            else if(q == 2){

                int i, v;

                cin >> i >> v;

                int value = query(1, 0, n-1, i, i);
                upd(1, 0, n-1, i, (value + v));
            }
            else {

                int i, j;
                cin >> i >>j;
                cout << query(1, 0, n-1,i, j ) << endl;
            }
        }
    }
    

    return 0;
 
}