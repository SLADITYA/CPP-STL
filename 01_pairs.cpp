// pair - Utility Library

#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair <int, int> p1 = {10, 20};   // Defining a pair

    cout << p1.first << " " << p1.second << endl;

    pair <int, pair <int, int>> p2 = {30, {40, 50}};    // Nested Pair

    cout << p2.second.first << " " << p2.second.second << endl;

    pair <int, int> arr[] = {{11, 22}, {33, 44}, {55, 66}};    // Pair Array

    cout << arr[1].first << " " << arr[1].second << endl;
}