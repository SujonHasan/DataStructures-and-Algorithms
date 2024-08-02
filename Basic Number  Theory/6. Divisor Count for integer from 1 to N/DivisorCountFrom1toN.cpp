/*
    ***Bismillahir Rahmanir Rahim***
    date---: "24-05-2022"
    time---: "23-16-38"
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

    int n;
    cin >> n;

    int arr[n+1];
    RESET(arr, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            arr[j]++;
        }
        
    }

    // for(auto x : arr) cout << x << " ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " " ;
    }
    

    return 0;
 
}