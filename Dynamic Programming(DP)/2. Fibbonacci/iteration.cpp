/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-11-2022"
    time---: "11-51-18"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n = 5;

    int arr[n + 1];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = (arr[i-1] + arr[i-2]);
    }
    
    cout << arr[n] << endl;
 
    return 0;
 
}