/*
    ***Bismillahir Rahmanir Rahim***
    date---: "26-06-2022"
    time---: "10-36-09"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
void solved(int L, int R, vector<int> v)
{
    int LCM = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        LCM = (LCM * v[i]) / (__gcd(LCM, v[i]));
    }

    if(LCM < L && (LCM * 2) > R || LCM > R)
    {
        cout << "-1" << endl;
        return;
    }

    // for (int i = L; i <= R; i++)
    // {
    //     if(i % LCM == 0) cout << i << " ";
    // }

    //// This is another approse
    int k = (L / LCM) * LCM;

    if(k < L) k += LCM;

    for (int i = k; i <= R; i += LCM)
    {
        cout << i <<" ";
    }
    
    
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int L, R, n;

    cin >> L >> R >> n;

    vector<int> arr(n);

    for(auto &x : arr) cin >> x;

    solved(L, R, arr);

    return 0;
 
}