// Queue (First in First out) - Time Complexity for all the operations is O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> q;

    q.push(10);
    q.push(20);
    q.emplace(30);    // q -> {10, 20, 30}

    cout << q.back() << endl;

    q.pop();    // q -> {20, 30}

    // size, swap, empty are same as stack

    cout << q.front();
}