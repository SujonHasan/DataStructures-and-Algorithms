 
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
}
 
ll meet_in_the_middle(ll a[], ll n, ll s)
{
 
    calcsubArray(a, X, n/2, 0);
    calcsubArray(a, Y, n - n/2, n/2);
 
    ll xSize = 1 << n/2;
    ll ySize = 1 << (n - n / 2);
 
    sort(Y, Y + ySize);
 
    ll count = 0;
 
    for (int i = 0; i < xSize; i++)
    {
        if(X[i] <= s)
        {
            auto it1 = lower_bound(Y, Y+ySize, s-X[i]) - Y;
            auto it2 = upper_bound(Y, Y+ySize, s-X[i]) - Y;

            count += (it2 - it1);
        }
    }

 
    return count;
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    ll n, x;
    cin >> n >> x;
 
    ll arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    cout << meet_in_the_middle(arr, n, x) << endl;
 
    return 0;
 
}