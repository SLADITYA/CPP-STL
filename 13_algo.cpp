// Algorithms in Cpp

#include<bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> p1, pair <int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p2.second < p1.second)
    {
        return false;
    }
    if (p1.first > p2.first)    // p2.second == p1.second
    {
        return true;
    }
    return false;
}

int main()
{
    // sort:

    int A[] = {2, 4, 5, 3, 1};

    sort (A, A+4);  // [start, end)

    // sort(A, A+5, greater<int>);  // sorts the array in descending order

    pair <int, int> P[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it acc to 2nd element, if 2nd element is same then sort it acc to 1st element but in descending order

    sort (P, P+3, comp);  // comperator -> Used when you need to sort in your own way  P -> {4, 1}, {2, 1}, {1, 2}

    int num1 = 7;
    int cnt = __builtin_popcount(num1);  // returns the set bit count
    cout << cnt << endl;

    long long num2 = 165764374395436;
    cnt = __builtin_popcountll(num2);
    cout << cnt << endl;

    string s = "241";
    sort(s.begin(), s.end());

    do
    {
        cout << s << " ";
    } while (next_permutation(s.begin(), s.end()));    // returns all the permutations in dict order
    cout << endl;

    int maxi = *max_element(A, A+5);
    int mini = *min_element(A, A+5);

    cout << mini << " " << maxi << endl;
}