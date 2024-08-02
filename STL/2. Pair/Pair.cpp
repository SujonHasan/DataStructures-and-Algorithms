/*
    ***Bismillahir Rahmanir Rahim***
    date---: "27-04-2021"
    time---: "02-40-27"
    Author-: Sujon Hasan
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*

    ***The pair container is a simple container defined in <utility>
        header consisting of two data elements or objects. 

    1. The first element is referenced as ‘first’ and the second element as 
    ‘second’ and the order is fixed (first, second).

    2. Pair is used to combine together two values which may be different in type. 
    Pair provides a way to store two heterogeneous objects as a single unit.

    3. Pair can be assigned, copied and compared. The array of objects allocated 
    in a map or hash_map are of type ‘pair’ by default in which all the ‘first’ elements are
    unique keys associated with their ‘second’ value objects.

    4. To access the elements, we use variable name followed by dot 
    operator followed by the keyword first or second.
    
    Syntax : 

    pair (data_type1, data_type2) Pair_name


    *** vector pair sort

        a. normal sort

        syntax : sort(v.begin(), v.end()); 

        normal vector pair sort first value compare . and minimum value sorted. when first value
        same then second value compare . second  minimum value comapre

        b. customise sort()

        syntax : sort(v.begin(), v.end(), cmp);

        cmp function return bool type , which type sort you need. when return true then sort. 
        when return false then not sort.

        c. vector pair greater sort  

        syntax : sort(v2.begin(), v2.end(), greater<pair<int, int>>());


*/

void vector_pair_sort();
void pari_initilize();

int main()
{
    // pari_initilize();

    vector_pair_sort();

    return 0;
}

void pari_initilize()
{
    pair<int, int> p;

    p.first = 10;
    p.second = 20;

    cout << p.first << " " << p.second << endl;

    vector<pair<int, int>> v; // use normal vector and use all function
}

bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.first > p2.first)
    {
        return 1;
    }
    else if (p1.first == p2.first)
    {
        return (p1.second < p2.second);
    }
    else
    {
        return false;
    }
}

void vector_pair_sort()
{
    vector<pair<int, int>> v = {{1, 5}, {2, 3}, {1, 4}, {2, 2}, {3, 4}, {3, 3}};

    // cmp function return which type of sort my need
    sort(v.begin(), v.end(), cmp);

    for (auto u : v)
    {
        cout << u.first << " " << u.second << endl;
    }

    cout << "\nv1 = \n";

    vector<pair<int, int>> v1 = {{1, 5}, {2, 3}, {1, 4}, {2, 2}, {3, 4}, {3, 3}};

    // normal vector pair sort first value compare . and minimum value sorted. when first value
    // same then second value compare . second  minimum value comapre
    sort(v1.begin(), v1.end());

    for (auto u : v1)
    {
        cout << u.first << " " << u.second << endl;
    }

    vector<pair<int, int>> v2 = {{1, 5}, {2, 3}, {1, 4}, {2, 2}, {3, 4}, {3, 3}};

    cout << "\nv2 = \n";
    sort(v2.begin(), v2.end(), greater<pair<int, int>>());

    for (auto u : v2)
    {
        cout << u.first << " " << u.second << endl;
    }
}