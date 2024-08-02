#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    o_set<int> se;

    se.insert(5);
    se.insert(2);
    se.insert(3);
    se.insert(5);
    se.insert(2);
    se.insert(3);

    // cout << "size = " << se.size() << endl;
    auto x = se.find_by_order(2);
    cout << (*x) << endl; // index value
    cout << se.order_of_key(2) << endl; // return number of value < x number

    return 0;
 
}