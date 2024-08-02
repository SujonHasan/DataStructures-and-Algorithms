/*
    ***Bismillahir Rahmanir Rahim***
    date---: "21-04-2021"
    time---: "01-35-29"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>

/*

    1. vector initilise ()
        syntx : a. vector<int> v. // index create push_back().
        syntex: b. vector<int> v(10) // initialise create index
    
    2. sorting

        syntex :  sort(v.begin(), v.end()); // assinding order
        v.begin() - vector sort staring address.
        v.end() - vector end . index befor the end address.

        b. sort(v.begin(), v.end(), geterthen<int>()) // deassinding order

    3. reverse
        syntex:  reverse(v.begin(), v.end());
        v.begin() - vector reverse staring address.
        v.end() - vector end . index befor the end address.

    4. unique
        syntex:  unique(v.begin(), v.end()) // starting point and end point 
        b. int size = unique(v.begin(), v.end()) - v.begin(); // return new unique vector size .
        
    5. Max element()
        syntex : a. max_element(v.begin(), v.end()); // return iterator 
        syntex : b. *max_element(v.begin(), v.end()); // return value
        syntex: c. int max_index = max_element(v.begin(), v.end()) - v.begin(); // return max index
        first check iterator address the subtract v.begin();

    6. Min element()
        syntex : a. min_element(v.begin(), v.end()); // return iterator 
        syntex: b. *min_element(v.begin(), v.end()); // return value
        syntex: c. int min_index = max_element(v.begin(), v.end()) - v.begin(); // return max index
        first check iterator address the subtract v.begin();

    7. vector find

        syntex : a. iterator it = find(v.begin(), v.end(), value); // retrun iterator
        syntex : b. int value = *find(v.begin(), v.end(), value); // return value
        syntex : c. int value_index = find(v.begin(), v.end(), value) - v.begin(); // return value index

    8. vector count

        syntex : a.int cnt = count(Iterator first, Iterator last, T &val)
        Returns the number of elements in the range [first,last) that compare equal to val.



*/
 
using namespace std;
void vector_initialise();
void vector_sort();
void vector_reverse();
void vector_erase();
void vector_unique();
void vector_max_element();
void vector_min_element();
void vector_find();
void vector_count();
void vector_sum();
 
int main()
{
    // vector_initialise();

    // vector_sort();

    // vector_reverse();

    vector_erase();

    // vector_unique();

    // vector_max_element();

    // vector_min_element();

    // vector_find();

    // vector_count();

    // vector_sum();
 
    return 0;
 
}

void vector_initialise()
{
    vector<int> v; // just initialise vector . beginning index create. value add use v.push_back.

    int input;
    cout << "Enter your vector element: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    // output use for each loop , using just value print not edit
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v1(5); // vector create 10 size index, it's initilise value are zero.

     // output use for each loop , using just value print not edit
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    // i have use any index , look like array
    cout << "Enter your vector1 element: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> v1[i]; // direct input in vector index. because we initialise diglar 10 index
    }

     // output use for each loop , using just value print not edit
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

}

void vector_sort()
{
    vector<int> v = {1, 5, 4, 2, 6, 3}; // initialise value assign

    // begin - starting point . and v.end - index befor the end.
    cout << "assinding order sort : ";
    sort(v.begin(), v.end()); // assainding order sorting

    for (auto i : v)
    {
        cout << i << " "; 
    }
    cout << endl;

    cout << "deassinding order sort : ";
    // deassing order sort two way

    sort(v.rbegin(), v.rend());
    // sort(v.begin(), v.end(), greater<int>());

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;   

}

void vector_reverse()
{
    vector<int> v = {1, 3, 2, 5, 4, 6};

    cout << "befor reverse = ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;    

    // begin() - staring point 
    // end - end index befor the end.

    reverse(v.begin() + 1, v.end() - 1); // reverse 1 index to 4 index

    cout << "after reverse : ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    
}

void vector_erase()
{
     vector<int> v = {1, 3, 2, 5, 4, 6};

    // v.erase(v.begin()); // erase 1 index 
     v.erase(v.begin(), v.begin() + 3); // erase starting to index before the end

     for (auto i : v)
     {
        cout << i << " ";
     }
     cout << endl;

    //  // speachal case . when we use erase one by one starting side then.

    //  reverse(v.begin(), v.end()); // first vector reverse 

    //  while (!v.empty())
    //  {
    //     cout<< v.back() << " "; // display last element 
    //     v.pop_back(); // last element remove 
    //  }
    //  cout << endl;

    //  cout << "vector size = " << v.size() << endl;
    
}

void vector_unique()
{
    vector<int> v = {1, 2, 3, 3, 4, 5, 5, 7, 7};

    sort(v.begin(), v.end()); // vector sorting

    int size = unique(v.begin(), v.end()) - v.begin(); // vector unique . and return total element number

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
     }
    
    cout << endl;
}

void vector_max_element()
{
    vector<int> v = {1, 2, 3, 7, 4, 5, 10};

    int max = *max_element(v.begin(), v.begin() + 4); // return max value 
    // int max_index = max_element(v.begin(), v.end()) - v.begin();

    cout << "max value = " << max << endl;
    // cout << "max index = " << max_index << endl;

}

void vector_min_element()
{
    vector<int> v = {2, 3, 7, 1, 4, 5, 10};

    int min = *min_element(v.begin(), v.end()); // return min value 
    int min_index = min_element(v.begin(), v.end()) - v.begin(); // return max value index

    cout << "min value = " << min << endl;
    cout << "min index = " << min_index << endl;

}

void vector_find()
{
    vector<int> v = {1, 2, 5, 3, 6, 10, 4};

    int value = *find(v.begin(), v.end(), 4);

    // vector<int> :: iterator it = find(v.begin(),v.end(), 4);

    // cout << "it = " << *it << endl;
    cout << value << endl;

    // int value_index = find(v.begin(), v.end(), 4) - v.begin();

    // cout <<"value index = " <<value_index << endl;


}

void vector_count()
{
    vector<int> v = {1, 2, 5, 3, 2, 10, 2, 4, 2};

    int cnt = count(v.begin(), v.end(), 2); // retrun total count this number

    cout << "total 3 number = " << cnt << endl;

}

void vector_sum()
{
    vector<int> v = {1, 5, 3, 10, 4};

    int sum = accumulate(v.begin(), v.end(),0);

    cout << "total number of sum = " << sum << endl;

}