/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-09-2021"
    time---: "12-08-56"
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
 
int main()
{
    Faster();

    /*

    __builtin_clz(x): This function is used to count the leading zeros of the integer. Note : clz = count leading zero’s

    Example: It counts number of zeros before the first occurrence of one(set bit).

    Note: __builtin_clz(x) This function only accept unsigned values
    Note: Similarly you can use __builtin_clzl(x) & __builtin_clzll(x) for long and long long data types.


    */

   int x = 16;

   int leading_zero = __builtin_clz(x);

   cout <<"Leading zero = " <<leading_zero << endl;


    /*
    __builtin_ctz(x): This function is used to count the trailing zeros of the given integer. Note : ctz = count trailing zeros.
    Example: Count no of zeros from last to first occurrence of one(set bit)


    Note: Similarly you can use __builtin_ctzl(x) & __builtin_ctzll(x) for long and long long data types.
    */

   int a = 16;

   int trailing_zero = __builtin_ctz(a);
   cout << "trailing zero = " << trailing_zero << endl;


   /*

   _builtin_popcount(x): This function is used to count the number of one’s(set bits) in an integer.
    Example:

    Note: Similarly you can use __builtin_popcountl(x) & __builtin_popcountll(x) for long and long long data types.

   */

  int b = 22;

  int popCount = __builtin_popcount(b);
  cout << "bultin popcount = " << popCount << endl;

  /*

  _builtin_parity(x): This function is used to check the parity of a number. This function returns true(1) if the number has odd parity else it returns false(0) for even parity.

  Note: Similarly you can use __builtin_parityl(x) & __builtin_parityll(x) for long and long long data types.

  */

     int c = 4;

     bool return_value = __builtin_parity(c);

     cout << "parity value = " << return_value << endl;

 
    return 0;
 
}