#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int t;

    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;
        vector<int> v(n);
        o_set<int> se;

        for(auto &x : v) cin >> x;

        long long sum = 0;

        for (int i = n-1; i >= 0; i--)
        {
            se.insert(v[i]);
            sum += se.order_of_key(v[i]);
        }
        
        cout << sum << endl;
    }
    
    return 0;
 
}