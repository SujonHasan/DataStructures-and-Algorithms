/*
    ***Bismillahir Rahmanir Rahim***
    date---: "25-04-2021"
    time---: "00-26-51"
    Author-: Sujon Hasan
*/

#include <iostream>
#include <algorithm>

using namespace std;

/*

                string 

    1. string sort()

        a. sort(s.begin(), s.end());
        starting address , and last address ... assending order sort

        b. sort(s.begin(), s.end(), greater<char>()) // decending order sort

        time complecity O(n long n);


    2. string reverse();

        a. reverse(s.begin(), s.end()) // 
        staring address , and before the last position. return type void.
        
        time complexity O(n);

        b. string rev = string(s.rbegin(), s.rend());

        retrun reverse string and assagin new string.....

    3. string erase()

        a.
        Erase the single character at iterator position pos.
        erase (iterator pos)

        b.
        Erase characters from iterator pos. to another iterator pos
        erase (iterator beg, iterator end ) or s.erase(2, 5);

        c.
        Erases all characters in a string
        s.erase();

        d.
        Erases all characters after position ‘pos’
        erase(size_type pos)

        e.
        remove specified character
        s.erase(remove(s.begin(), s.end(), character), s.end());

    4. string substring()

         Syntax:
        string substr (size_t pos, size_t len) const;
        Parameters:
        pos: Position of the first character to be copied.
        len: Length of the sub-string.
        Return value: It returns a string object.
    
    5. string to int and int to string converte 

        a. string to int = stoi(s);
        b. string to long long = stoll(s, nullptr, 10);
        c. int to string = tostring(num)
    
    6. string copy

        a. copy to string 
         s1 = s;
        
        b. copy to string . copy string added another string
        copy(s.begin(), s.begin() + 5, back_inserter(s1));

    7. string find()

        a. int index = find(sub_string); // return substring first index    


*/

void string_sort();
void string_reverse();
void string_erase();
void substring();
void convert_string_integer();
void string_copy();
void string_find();

int main()
{

    // string_sort();

    // string_reverse();

    // string_erase();

    // substring();

    // convert_string_integer();

    // string_copy();

    string_find();

    return 0;
}

void string_sort()
{
    string s = "sujon islam";

    sort(s.begin(), s.end()); // assending order

    cout << "assending sort = " << s << endl;

    sort(s.begin(), s.end(), greater<char>()); // descending order

    cout << "descending sort = " << s << endl;
}

void string_reverse()
{
    string s = "sujon islam";

    string rev = string(s.rbegin(), s.rend()); // copy this string and reverse
    cout << "rev = " << rev << endl;

    reverse(s.begin(), s.end()); // reverse string . void type
    cout << s << endl;
}

void string_erase()
{
    string s = "sujon islam";

    //1>
    // // Erase the single character at iterator position pos.
    // // erase (iterator pos)

    // s.erase(s.begin());
    // cout << s << endl;

    //2.
    // // Erase characters from iterator pos. to another iterator pos
    // //  erase (iterator beg, iterator end )

    // s.erase(2, 5); // starting point and end point
    // s.erase(s.begin(), s.begin() + 3);
    // cout << s << endl;

    // //3.
    // //  Erases all characters in a string
    // s.erase(); // delete all data.
    // cout << s << endl;

    // //4.....
    // // Erases all characters after position ‘pos’
    // // erase(size_type pos)

    // s.erase(3);
    // cout << s << endl;

    // // 5. remove specified character
    //     s.erase(remove(s.begin(), s.end(), character), s.end());

    // string s = "supppppjon islam";
    // s.erase(remove(s.begin(), s.end(), 'p'), s.end());
    // cout << s << endl;
}

void substring()
{
    // Syntax:
    // string substr (size_t pos, size_t len) const;
    // Parameters:
    // pos: Position of the first character to be copied.
    // len: Length of the sub-string.
    // Return value: It returns a string object.

    string s = "sujon islam";

    string sub = s.substr(6, 5);

    cout << sub << endl;

}

void convert_string_integer()
{
    // string to integer

    string s = "1234";
    string s2 = "9876543210";

    int a = stoi(s);
    cout << "integer a = " << a << endl;

    long long int b = stoll(s2, nullptr, 10);
    cout << "b = " << b << endl;

    int num = 5678;

    string s1 = to_string(num);

    cout << "string s1 = " << s1 << endl;
}

void string_copy()
{
    string s = "sujon islam";
    string s1 = "joy";
    string s2 = "shakib";

    s1 = s;
    cout <<"s1 = " <<s1 << endl;

    copy(s.begin() + 5, s.end(), back_inserter(s2));
    cout << "s2 = " << s2 << endl;
}

void string_find()
{
    string s = "i love problem solving";

    string subs = "lovs";

    int found = s.find(subs);

    if (found != -1)
    {
        cout << "sub string found this sentense " << endl;
    }
    else
    {
        cout << "sub string not found this sentense" << endl;
    }
    
}