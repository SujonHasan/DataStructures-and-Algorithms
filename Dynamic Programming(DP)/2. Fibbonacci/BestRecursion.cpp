/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-11-2022"
    time---: "21-58-47"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 55;
int f[N];
bool is_completed[N];

int fibo(int i){

    if(i == 0) return 0;
    if(i == 1) return 1;

    if(is_completed[i] == true) return f[i];

    f[i] = fibo(i-1) + fibo(i-2);

    is_completed[i] = true;
    
    return f[i];
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    cout << fibo(n) << endl;

    return 0;
 
}