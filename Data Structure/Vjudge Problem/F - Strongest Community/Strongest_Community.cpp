/*
    ***Bismillahir Rahmanir Rahim***
    date---: "18-10-2022"
    time---: "18-52-13"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

#define ll long long

const int N = 1e5 + 2;

int a[N];
// ll t[N * 4];

pair<int,int> t[N*4];

pair<int,int> x = {1e9+7, -1};


pair<int,int> myMin(pair<int, int> a, pair<int, int> b)
{
    pair<ll, ll> x;

    if(a.first < b.first)
    {
        x.first = a.first;
        x.second = a.second;
    }
    else if(a.first > b.first)
    {
        x.first = b.first;
        x.second = b.second;
    }
    else{

        x.first = a.first;
        x.second = a.second + b.second;
    }

    return x;
}

void build(int node, int b, int e)
{
    if(b == e)
    {
        t[node].first = a[b];
        t[node].second = 1;
        return;
    }

    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;

    build(l, b, mid);
    build(r, mid + 1, e);

    t[node] = myMin(t[l] ,t[r]);
}

pair<int, int> query(int node, int b, int e, int i, int j)
{
    if(b > j or e < i) return x;

    if(b >= i and e <= j)
    {   
        // cout <<"node = " << node << " node = " << t[node] << endl;
        return t[node];
    }

    int l = node * 2, r = (node * 2) + 1;
    int mid = (b + e) / 2;

    pair<int, int> q1 = query(l, b, mid, i, j);
    pair<int, int> q2 = query(r, mid + 1, e, i, j);
    
    pair<int, int> q = myMin(q1 ,q2);

    return q;

}

void upd(int node, int b, int e, int i, int x)
{
    if(b > i || e < i) return;

    if(b == e and b == i)
    {
        t[node].first = x;
        t[node].second = 1;
        return;
    }

    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i , x);
    upd(r, mid + 1, e, i , x);
    t[node] = myMin(t[l] ,t[r]);
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m;

    cin >>n >> m;

    int input;

    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        a[i] = input;
    }

    build(1, 1, n);
    
    
    while (m--)
    {
        int q, a, b;
        cin >> q >> a >> b;
        a++;

        if(q == 1)
        {
            upd(1, 1, n, a, b);

        }
        else{
            
            cout << query(1, 1, n, a, b).first <<" " << query(1, 1, n, a, b).second << endl;
        }
    }

    return 0;
}