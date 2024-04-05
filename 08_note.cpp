// Lower Bound and Upper Bound - The time complexity for these operations is O(log N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int A[] = {1, 4, 5, 8, 9};  // sorted array

    bool res = binary_search(A, A+5, 3);    // returns 0 as the element is not present
    cout << res << endl;

    res = binary_search(A, A+5, 4);    // returns 1 as the element is present
    cout << res << endl;
    */

    // lower_bound function:

    /*
    int A[] = {1, 4, 5, 6, 9, 9};

    // lower bound returns a pointer pointing to the memory location of that element

    int ind = lower_bound(A, A+6, 4) - A;
    cout << ind << endl;

    // since 7 is not present in the array, it points to the smaller the element larger than 7 present in the array
    ind = lower_bound(A, A+6, 7) - A;
    cout << ind << endl;

    ind = lower_bound(A, A+6, 10) - A;
    cout << ind << endl;

    // for vectors - ind = lower_bound(A.begin(), A.end(), element) - A.begin();
    */

    // upper_bound function:

    int A[] = {1, 4, 5, 6, 9, 9};

    // upper_bound returns a pointer pointing to the memory location of the next greater element

    int ind = upper_bound(A, A+6, 4) - A;
    cout << ind << endl;

    ind = upper_bound(A, A+6, 7) - A;
    cout << ind << endl;

    ind = upper_bound(A, A+6, 10) - A;
    cout << ind << endl;

    // for vectors - ind = upper_bound(A.begin(), A.end(), element) - A.begin();
}