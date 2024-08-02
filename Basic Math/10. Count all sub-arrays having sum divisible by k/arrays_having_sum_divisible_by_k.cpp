/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-06-2022"
    time---: "11-56-05"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

void Solved(vector<int> v, int k)
{
    map<int, int> m;
    int ans = 0, size = v.size();
    int sum = 0, rem;
    m[0] = 1;

    for (int i = 0; i < size; i++)
    {
        sum += v[i];
        rem = sum % k;

        if(rem < 0) rem += k;

        if(m[rem])
        {
            ans += m[rem];
        }
        
        m[rem]++;

        cout <<"sum = " << sum << "rem = " << rem << "  ans = " << ans << endl;
    }

    cout << ans << endl;
}

 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, k;

    cin >> n >> k;

    vector<int> v(n);

    for(auto &x : v) cin >> x;

    Solved(v, k); 
 
    return 0;
 
}