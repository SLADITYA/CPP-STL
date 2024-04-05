// Set - Stores the elements in a sorted manner. Sets doesnt store duplicates.

// A tree is maintained to implement a set

// In a Set every operation like insertion, deletion etc happens in O(log N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int> st;

    st.insert(10);
    st.insert(30);
    st.insert(50);
    st.insert(30);
    st.insert(40);
    st.emplace(20);    // st -> {10, 20, 30, 40, 50}

    // Functionality of insert in vector can be used to also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size(), empty(), swap() are same as vectors

    auto it = st.find(30);   // returns an iterator which points to 30

    it = st.find(60);   // it points to the next memory location of the last element as 60 is not in the set

    st.erase(50);   // removes 50   O(log n)

    it = st.begin();
    st.erase(it);

    for (int val : st)  // for each loop
    {
        cout << val << " ";
    }
    cout << endl;

    int cnt = st.count(30);    // returns 1 if the element is present else returns 0
    cout << cnt << endl;

    st.insert(40);
    st.insert(60);
    st.insert(25);      // st -> {20, 25, 30, 40, 60}

    auto it1 = st.find(20);
    auto it2 = st.find(40);
    st.erase(it1, it2);    // st -> {40, 60}    [first, last)

    for (int val : st)
    {
        cout << val << " ";
    }
    cout << endl;

    // lower_bound() and upper_bound() function works in the same way as in vector.

    it = st.lower_bound(40);
    cout << *(it) << endl;

    it = st.upper_bound(40);
    cout << *(it) << endl;
}