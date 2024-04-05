// Deque (Container) - Double Ended Queue

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque <int> dq;

    dq.push_back(10);
    dq.emplace_back(20);    // dq -> {10, 20}

    dq.push_front(30);
    dq.emplace_front(40);   // dq -> {40, 30, 10, 20}

    dq.pop_back();
    dq.pop_front();    // dq -> {30, 10}

    cout << dq.front() << " " << dq.back() << endl;

    // rest functions same as vector - begin, end, rbegin, rend, clear, insert, size, swap, loop

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *(it) << " ";
    }
}