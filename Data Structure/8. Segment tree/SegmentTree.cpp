/*
    ***Bismillahir Rahmanir Rahim***
    date---: "18-10-2022"
    time---: "13-34-39"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

#define l (node * 2)
#define r (node * 2) + 1
#define mid (b + e) /2

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

    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = t[l] + t[r];
}
 
int query(int node, int b, int e, int i, int j)
{
    if(b > j || e < i) return 0;
    if(b >= i && e <= j) return t[node];

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

    upd(l, b, mid, i , x);
    upd(r, mid + 1, e, i , x);
    t[node] = t[l] + t[r];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }

    build(1, 1, n);
    // cout << t[3] << endl;
    cout << query(1, 1, n, 2, 4) << endl; // return sum 
    upd(1, 1, n, 3, 10);
    cout << query(1, 1, n, 2, 4) << endl; // return sum 
 
    return 0;
 
}