// Stack (Last In First Out) - Operations performed are push and pop

// The time complexity for the operations push, pop, and top is O(1)

// If the stack is empty top = -1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> st;

    st.push(10);    // top -> 10
    st.push(20);    // top -> 20
    st.push(30);
    st.emplace(40);    // st -> {40, 30, 20, 10}

    // Indexing is not allowed in a Stack. Elements in a stack are accessed using top. 

    st.pop();   // st -> {30, 20, 10}

    cout << st.top() << endl;   // 30

    cout << st.size() << endl;

    cout << st.empty() << endl;

    stack <int> st1, st2;
    st1.swap(st2);
}