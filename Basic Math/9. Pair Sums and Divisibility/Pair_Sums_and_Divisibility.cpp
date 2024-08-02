/*
    ***Bismillahir Rahmanir Rahim***
    date---: "26-06-2022"
    time---: "13-45-19"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
void Solved(vector<int> arr, int k)
{
    int size = arr.size();
    map<int, int> m;
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        int rem = arr[i] % k;

        if(rem) ans += m[k - rem];
        else ans += m[0];
        
        m[rem]++;
    }

    cout << ans << endl;
    
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, k;

    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    Solved(arr, k);
 
    return 0;
 
}