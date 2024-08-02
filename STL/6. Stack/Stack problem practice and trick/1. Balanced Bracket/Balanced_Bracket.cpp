/*
    ***Bismillahir Rahmanir Rahim***
    date---: "29-04-2021"
    time---: "02-30-59"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define RESET(a,x)    memset(a,x,sizeof(a)) //set elements of array / character to some value
#define lli         long long int
#define ull         unsigned long long
#define ui          unsigned int
#define MAX(a, b)   a = max(a, b); // maximum number return
#define MIN(a, b)   a = min(a, b); // minimum number return
#define cout(a)     cout << a << endl;

bool isbalanced(char c1, char c2)
{
    return (c1 == '(' && c2 == ')' || c1 == '{' && c2 == '}' || c1 == '[' && c2 == ']');
}
 
int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        string s;

        cin >> s;

        stack<char> st;

        bool check = 1;

        for(auto v : s)
        {
            if (v == '(' || v == '{' || v == '[')
            {
                st.push(v);
            }
            else
            {
                if (st.empty())
                {
                    check = 0;
                    break;
                }
                else
                {
                    if (isbalanced(st.top(), v))
                    {
                        st.pop();
                    }
                    else
                    {
                        check = 0;
                        break;
                    }
                    
                }
                

            }
            
        }

        if (!st.empty())
        {
            check = 0;
        }

        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
    }
    


 
    return 0;
 
}