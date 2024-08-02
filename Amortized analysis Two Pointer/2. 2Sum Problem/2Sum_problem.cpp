/*
    ***Bismillahir Rahmanir Rahim***
    date---: "07-11-2021"
    time---: "17-15-26"
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, s;

    cout << "Enter your number of array and sum = " << endl;
    cin >> n >> s;

    vector<int> v(n);

    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());

    int i = 0, j = n - 1;

    while (i < j)
    {
        if(v[i] + v[j] == s) break;
        else if(v[i] + v[j] > s) j--;
        else i++;
    }

    cout << v[i] << " + " << v[j] << " = " << s << endl;
    
    return 0;
 
}