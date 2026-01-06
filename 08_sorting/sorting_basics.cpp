// sorting_basics.cpp (was sorting_problems.cpp)
// Topic: Sorting - Ordering Data
// ------------------------------------------------------------------
// Important Notes:
// 1. std::sort() is an efficient O(N log N) sorting algorithm (Introsort).
// 2. Syntax: sort(start_iterator, end_iterator, [comparator]).
// 3. Default behavior: Sorts in ascending order (Smallest to Largest).
// 4. greater<type>() can be used to sort descending.
// 5. Custom comparators allow sorting objects or complex criteria.
// ------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ------------------------------------------------------------------
// Example 1: Basic Sorting (Ascending & Descending)
void demonstrateBasicSort() {
    vector<int> nums = {5, 2, 9, 1, 5, 6};

    // Ascending
    sort(nums.begin(), nums.end());
    cout << "Ascending:  ";
    for(int x : nums) cout << x << " ";
    cout << endl;

    // Descending
    sort(nums.begin(), nums.end(), greater<int>());
    cout << "Descending: ";
    for(int x : nums) cout << x << " ";
    cout << endl;
}

// ------------------------------------------------------------------
// Example 2: Sorting with Median Logic
void demonstrateMedian() {
    vector<int> v = {10, 20, 5, 40, 30}; 
    // Sorted: 5, 10, 20, 30, 40 (Size 5) -> Median 20
    
    sort(v.begin(), v.end());
    int n = v.size();

    cout << "Sorted Array for Median: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    double median;
    if (n % 2 == 1) {
        median = v[n / 2];
    } else {
        median = (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }
    cout << "Median: " << median << endl;
}

int main() {
    cout << "=== Example 1: Basic Sorting ===" << endl;
    demonstrateBasicSort();
    cout << endl;

    cout << "=== Example 2: Median Calculation ===" << endl;
    demonstrateMedian();

    return 0;
}
