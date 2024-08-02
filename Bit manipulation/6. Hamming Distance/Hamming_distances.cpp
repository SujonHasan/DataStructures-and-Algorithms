/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-09-2021"
    time---: "16-31-54"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define Faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define RESET(a,x)    memset(a,x,sizeof(a))
#define ll          long long
#define ull         unsigned long long
#define ui          unsigned int
#define MAX(a, b)   a = max(a, b);
#define MIN(a, b)   a = min(a, b);
#define cout(a)     cout << a << endl;

void hammin_dintance(string a, string b)
{
    int d = 0;
    int size = a.size();

    cout <<"a = " << a << endl;
    cout << "b = " << b << endl;

    for (int i = 0; i < size; i++)
    {
        if(a[i] != b[i])
        {
            d++;
        }
    }
    
    cout << d << endl;
}

 
int main()
{
    Faster();

    string a, b;

    cin >> a >> b;

    hammin_dintance(a, b);
 
    return 0;
 
}