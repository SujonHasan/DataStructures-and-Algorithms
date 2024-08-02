/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-09-2021"
    time---: "11-20-05"
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


// this function show which bit are one and zero .
void application()
{

    int x = 20;

    for(int i = 29 ; i >= 0; i--)
    {
        if(x & (3 << i))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" <<endl;
        }
    }
}
 
int main()
{
    Faster();

//     /* 
    
//     left  bit shift x << k right side and k times 0

//     Note that x << k corresponds to multiplying x by 2k,


//     */
   

//    int x = 14; 
//    cout <<"left shift" <<(x << 2) << endl; // it's shift two time left . or add new  2 times 0 right side

//    /*

//     Right bit shift x >> k remove right side k times

//     x >> k corresponds to dividing x by 2k rounded down to an integer.

//    */

//   int y = 49;

//   cout << "right shift 3 = " << (49 >> 3) << endl; // this means 49 / 8  



    application();



    return 0;
 
}