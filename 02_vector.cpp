// Vector (Container) - A dynamic array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v1;    // v1 -> {}

    // push_back() is similar to emplace_back() but emplace_back() runs faster
    
    v1.push_back(10);
    v1.emplace_back(20);    // v1 -> {10, 20}

    vector <pair <int, int>> v2;    // Vector of pair data-type

    v2.push_back({10, 20});
    v2.emplace_back(30, 40);    // v2 -> {{10, 20}, {30, 40}}

    vector <int> v3(4, 100);    // v3 -> {100, 100, 100, 100}

    vector <int> v4(5);    // v4 -> {0, 0, 0, 0, 0} (It can be 0 or garbage value depends on compiler)

    vector <int> v5(v3);   // Shallow Copy - Changes made in vec v3 will not reflected in vec v5
    
    // Iterator - It is a pointer which points to the memory address of an element

    v1.emplace_back(30);
    v1.emplace_back(40);
    v1.emplace_back(50);
    v1.emplace_back(60);    // v1 -> {10, 20, 30, 40, 50, 60}

    vector <int>::iterator it = v1.begin();

    it ++;
    cout << *(it) << endl;

    it += 2;
    cout << *(it) << endl;

    it = v1.end();  // points to the next memory location of the last element

    // it = v1.rbegin();    // reverse begin
    // it = v1.rend();  // reverse end

    for (it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (int val : v1)     // for-each loop
    {
        cout << val << " ";
    }
    cout << endl;

    // Deletion of elements

    v1.erase(v1.begin()+1);    // v1 -> {10, 30, 40, 50, 60}

    v1.erase(v1.begin()+2, v1.begin()+4);   // v1 -> {10, 30, 60}   [start, end)

    // auto -> automatically detects and assigns a datatype to a variable
    for (auto val : v1)
    {
        cout << val << " ";
    }
    cout << endl;

    // Insertion of elements

    v1.insert(v1.begin(), 70);  // v1 -> {70, 10, 30, 60}

    v1.insert(v1.begin()+1, 2, 80);    // v1 -> {70, 80, 80, 30, 60}

    vector <int> v6 = {10, 20};
    v1.insert(v1.begin()+1, v6.begin(), v6.end());  // v1 -> {70, 10, 20, 80, 80, 30, 60}

    for (auto val : v1)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << v1.size() << endl;  // gives the size of the vector

    v1.pop_back();  // removes the last element from the vector

    vector <int> v7 = {10, 20};
    vector <int> v8 = {30, 40};

    v7.swap(v8);    // v7 -> {30, 40}   v8 -> {10, 20}

    for(auto val : v7)
    {
        cout << val << " ";
    }
    cout << endl;
    for(auto val : v8)
    {
        cout << val << " ";
    }
    cout << endl;

    v7.clear();    // erases the entire vector

    cout << v7.empty();    // Returns 1 (vector is empty) or 0 (vector not empty)
}