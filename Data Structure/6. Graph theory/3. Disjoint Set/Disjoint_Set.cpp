/*
    ***Bismillahir Rahmanir Rahim***
    date---: "13-10-2021"
    time---: "23-35-49"
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

#define mx 100
int parent[mx];

void makeSet(int u)
{
    parent[u] = u;
}

void initi()
{
    for (int i = 1; i <= 8; i++)
    {
        makeSet(i);
    }
    
}

bool flag = false;

int Find(int u)
{
    if(flag)
    {
        cout << "check parent = " << u << endl;
    }

    if(parent[u] == u) return u;

    // return parent[u] =  Find(parent[u]); // path compression
    return Find(parent[u]); // normal recursion function
}

void Union(int u, int v)
{
    int p = Find(u);
    int q = Find(v);

    if(p != q)
    {
        parent[q] = p;
    }
}

bool isFriend(int u , int v)
{
    int p = Find(u);
    int q = Find(v);

    return (p == q); 
}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    initi();
    
    // for (int i = 1; i <= 8; i++)
    // {
    //     cout << parent[i] << endl;
    // }

    // Union(2, 3);
    // Union(3, 4);
    // Union(4, 5);
    // Union(5, 6);
    // Union(6, 7);
    // Union(7, 8);
    Union(7, 8);
    Union(6, 7);
    Union(5, 6);
    Union(4, 5);
    Union(3, 4);
    Union(2, 3);

    flag = true;
    cout << Find(7);
    cout << "......." << endl;
    // cout << Find(6);
    cout <<"..........." << endl;
    // cout << Find(8);
    
    // if(isFriend(2, 8))
    // {
    //     cout << "Same set" <<endl;
    // }
    // else
    // {
    //     cout << "Not same set" <<endl;
    // }

    return 0;
 
}