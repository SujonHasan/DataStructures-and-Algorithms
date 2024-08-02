/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-11-2022"
    time---: "22-56-19"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;

const int N = 1e5 + 9;
int step[N];

int minSteps(int i)
{

    if(i == 1) return 0;
    if(step[i] != -1) return step[i];

    int ans = minSteps(i - 1) + 1;

    if(i % 2 == 0)
    {
        ans = min(ans, minSteps(i / 2) + 1);  
    }

    if(i % 3 == 0){
        ans = min(ans, minSteps(i / 3) + 1);
    }

    step[i] = ans;
    return step[i];

}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    memset(step, -1, sizeof step);

    cout << minSteps(100000) << endl;
 
    return 0;
 
}