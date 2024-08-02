/*
    ***Bismillahir Rahmanir Rahim***
    date---: "26-04-2022"
    time---: "21-45-43"
    Author-: Sujon Hasan
*/
 
#include <iostream>
 
using namespace std;
 
int main()
{

    int n; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0) cout << i << " ";
    }
    cout << endl;
    
    return 0;
 
}