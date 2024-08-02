/*
    ***Bismillahir Rahmanir Rahim***
    date---: "21-07-2022"
    time---: "09-59-13"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;

ll X[20000005], Y[20000005];

void calcsubArray(ll a[], ll x[], ll n, ll c)
{
    for (int i = 0; i < (1<<n); i++)
    {
        ll s = 0;

        for (int j = 0; j < n; j++)
        {
            if(i & (1 << j)) s += a[j + c];
        }
        
        x[i] = s;
    }

    cout << endl;
    
}

ll meet_in_the_middle(ll a[], ll n, ll s)
{

    calcsubArray(a, X, n/2, 0);
    calcsubArray(a, Y, n - n/2, n/2);

    int xSize = 1 << n/2;
    int ySize = 1 << (n - n / 2);

    sort(Y, Y + ySize);

    ll mx = 0;

    for (int i = 0; i < xSize; i++)
    {
        if(X[i] <= s)
        {
            int p = lower_bound(Y, Y+ySize, s-X[i]) - Y;

            if(p == ySize || Y[p] != (s - X[i])) p--;

            if(Y[p] + X[i] > mx) mx = Y[p] + X[i];

        }
    }

    return mx;

}
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll n, s;
    cout <<"Enter number of array and sum : ";
    cin >> n >> s;

    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << meet_in_the_middle(arr, n, s) << endl;

    return 0;
 
}