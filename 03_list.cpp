// List (Container) - Doubly Linked List

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list <int> ls;

    ls.push_back(10);
    ls.emplace_back(20);    // ls -> {10, 20}

    // insert takes more time compared push_front() and push_back()

    ls.push_front(30);
    ls.emplace_front(40);   // ls -> {40, 30, 10, 20}

    // rest all functions are same as a vector - begin, end, rend, rbegin, clear, size, insert, swap, loop

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *(it) << " ";
    }
}