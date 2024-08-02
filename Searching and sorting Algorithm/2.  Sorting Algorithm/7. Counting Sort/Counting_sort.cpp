/*
    ***Bismillahir Rahmanir Rahim***
    date---: "10-10-2021"
    time---: "18-16-39"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define Faster()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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

void countingSort(vector<int>& A)
{
    int len = A.size();
    int MX = A[0];

    for(auto i : A)
    {
        if(MX < i) MX = i;
    }

    MX++;
    vector<int> C(MX);
    vector<int> B(len);

    for(auto i : A)
    {
        C[i]++;
    }

    for (int i = 1; i < MX; i++)
    {
        C[i] = C[i] + C[i - 1];
    }

    for (int i = 0; i < len; i++)
    {
        B[i] = 0;
    }
    

    for (int i = len - 1; i >= 0; i--)
    {
        // cout << "A = " << A[i] << endl;
        // cout << "C = " << C[A[i]] << endl; 

        B[C[A[i]] - 1] = A[i];
        C[A[i]]--;

    }
    
    cout << "after sorting: \n";
    for (int i = 0; i < len; i++)
    {
        cout << B[i] << " ";
    }
    
    // A = B;

}
 
int main()
{
    Faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;

    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    cout << "Before sort = \n";
    for(auto i : A)
    {
        cout << i << " ";
    }
    cout << "\n";

    countingSort(A);

    // cout << "After sort = \n";
    // for(auto i : A)
    // {
    //     cout << i << " ";
    // }

 
    return 0;
 
}