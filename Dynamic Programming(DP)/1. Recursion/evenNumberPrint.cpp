/*
    ***Bismillahir Rahmanir Rahim***
    date---: "19-11-2022"
    time---: "19-39-29"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

void printEven(int arr[], int n)
{
    if(n == 0) return;

    printEven(arr, n - 1);

    if(arr[n] % 2 == 0) cout << arr[n] <<" "; 
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printEven(arr, n-1);
    

    return 0;
 
}