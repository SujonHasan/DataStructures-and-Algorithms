/*
    ***Bismillahir Rahmanir Rahim***
    date---: "16-11-2022"
    time---: "13-24-34"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

void modify(int a[])
{
    a[2] = 100;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int arr[4] = {1, 2, 3, 4};

    modify(arr);

    for(auto x : arr) cout << x << " ";
 
    return 0;
 
}