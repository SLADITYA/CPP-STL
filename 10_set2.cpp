// Multi Set - Elements are stored in a sorted manner

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset <int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);   // ms -> {1, 1, 1, 1, 2};

    ms.erase(ms.find(1));   // ms -> {1, 1, 1, 2};

    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    int cnt = ms.count(1);  // gives the count of 1
    cout << cnt << endl;

    ms.erase(1);    // all 1's are erased

    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // rest all functions are same as set
}