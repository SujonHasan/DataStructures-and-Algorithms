#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;

    cin >> n;

    vector<int> v(n);
    o_set<int> se;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        se.insert(v[i]);
        cout << se.order_of_key(v[i]) << " ";
    }

    cout << endl;

    return 0;
 
}