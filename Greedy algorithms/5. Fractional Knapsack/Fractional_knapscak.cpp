/*
    ***Bismillahir Rahmanir Rahim***
    date---: "13-10-2021"
    time---: "11-35-28"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
// #define Faster()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define RESET(a,x)   memset(a,x,sizeof(a))
#define ll           long long
#define ull          unsigned long long
#define ui           unsigned int
#define MAX(a, b)    a = max(a, b);
#define MIN(a, b)    a = min(a, b);
#define cout(a)      cout << a << endl;
#define fZero        __builtin_clz
#define lZero        __builtin_ctz
#define setCount     __builtin_popcount

bool cmp(pair<double, double> a, pair<double, double> b)
{
    return a.first/a.second > b.first / b.second;
}

double fractionKnapsack(vector<pair<double, double>> items, int n, double capacity)
{
    double mx = 0;

    sort(items.begin(), items.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        if(items[i].second <= capacity)
        {
            capacity -= items[i].second;
            mx += items[i].first;
        }
        else
        {
            mx += (items[i].first / items[i].second) * capacity;
            capacity = 0;
            break;
        }
    }
    
    return mx;
}
 
int main()
{
    // Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int item;
    double capacity; 
    cout << "Enter your item and capacity \n";
    cin >> item >> capacity;

    vector<pair<double, double>> items(item);

    cout << "Enter your Profit and Weight: \n";
    for (int i = 0; i < item; i++)
    {
        cin >> items[i].first >> items[i].second;
    }
    

    double Max_result = fractionKnapsack(items, item, capacity);

    cout << "MAX kanpsack = " << Max_result << endl;
 
    return 0;
 
}