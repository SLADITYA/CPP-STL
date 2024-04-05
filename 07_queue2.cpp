// Priority Queue - The elements with the largest values stay at the top.

// The elements are not stored linearly. A tree data structure is maintained for a priority queue.

// Time Complexity for push and pop is O(log n) and for top is O(1).

#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int> pq1;   // max heap

    pq1.push(10);
    pq1.push(30);
    pq1.push(20);
    pq1.push(35);
    pq1.emplace(25);   // pq1 -> {35, 30, 25, 20, 10}

    cout << pq1.top() << endl;  // prints 35
    pq1.pop();
    cout << pq1.top() << endl;  // prints 30

    // size, swap, empty function are same as stack or a queue

    priority_queue <int, vector <int>, greater <int>> pq2;  // min heap

    pq2.push(10);
    pq2.push(30);
    pq2.push(20);
    pq2.push(35);
    pq2.emplace(25);   // pq2 -> {10, 20, 25, 30, 35}

    cout << pq2.top();  // prints 10
}