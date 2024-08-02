/*
    ***Bismillahir Rahmanir Rahim***
    date---: "19-11-2022"
    time---: "19-30-42"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

void reverseArray(int arr[], int n)
{
    if(n == -1) return;
    cout << arr[n] <<" ";
    reverseArray(arr, n-1);

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
    
    reverseArray(arr, n-1);
    cout << endl;

    return 0;
 
}