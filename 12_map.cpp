// Map - Stores elements in pairs (keys, values). Map stores elements in sorted manner based on key value.

// Keys must be unique. Both keys and values can be of any datatype.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <int, int> mp;

    // map <int, pair <int, int>> mp;   // key - 1 integer, value - 2 integers
    // map <pair <int, int>, int> mp;   // key - 2 integers, value - 1 integer

    mp[1] = 2;
    mp.insert({3, 1});
    mp.insert({2, 4});    // mp -> [{1, 2}, {2, 4}, {3, 1}]

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1] << endl;  // prints the value present in the key
    cout << mp[5] << endl;

    auto it = mp.find(2);   // find an element

    it = mp.lower_bound(2);    // lower_bound and upper_bound
    it = mp.upper_bound(3);

    // erase, swap, size, empty are the same as above
}

// A multimap is similar to multiset and an unordered_map is similar to unordered_set

// multimap <int, int> mp1;     unordered_map <int, int> mp2;