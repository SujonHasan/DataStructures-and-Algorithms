/*
    ***Bismillahir Rahmanir Rahim***
    date---: "28-04-2021"
    time---: "14-02-04"
    Author-: Sujon Hasan
*/

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

/*

    Map:

    Maps are associative containers that store elements in a mapped fashion. 
    Each element has a key value and a mapped value. No two mapped values can 
    have same key values.

    syntax : map<datatype1, datatype2> map_name;
			map<key, value> map_name;
			map<int, int> m;

    1. Map initilize.

        syntax : map<int, int> m;

        and assending order sort



*/

void map_initilize();

void display(map<string,int> m)
{
    cout << "size = " << m.size() << endl;

    for (auto u : m)
    {
        cout << u.first << " " << u.second << endl;
    }

    // for(auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

}

void mapSwap()
{
    map<string, int> m1, m2;

    m1["20"] = 200; 
    m1["30"] = 300;
    m1["10"] = 100; 

    m2["10"] = 500; 
    m2["30"] = 700;
    m2["20"] = 600;

    m1.swap(m2);

    cout <<"after swap : " << endl;

    cout <<"map 1 : ";
    display(m1);
    cout << endl;
    cout << "map 2 : " ;
    display(m2);  

}

int main()
{

    // map_initilize();
    mapSwap();

    return 0;
}

void map_initilize()
{

    // map<int, int> m;
    map<string, int> m;

    int n,b;
    string a;

    cout << "number of key and value in map: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        m[a] = b; // initialize key and value
        // m.insert(make_pair(a, b)); // insert map key and value
    }

    m.insert({"sujon", 1000});
    m.insert(make_pair("abc", 2000));
    m.insert({"sujon", 3000});

    //// single element erase
    // auto it = m.find("abe");
    // if(it != m.end()) m.erase(it);

    m.erase(m.begin(), m.find("abe"));

    cout << "output ............" << endl;
    display(m);
}

/////// input...........
// 12
// abc 200
// abe 300
// abd 400
// abe 500
// sdh 34454
// dsfj 4356
// fnknf 3553
// fkggds 53466
// hdfs 667
// kjdfsj 67867
// kmnvfnf 7576
// mcbfj 459876