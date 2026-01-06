// array_basics.cpp (was array_problems.cpp)
// Topic: Arrays - Fixed-Size Collections
// ------------------------------------------------------------------
// Important Notes:
// 1. Arrays store elements of the same type in contiguous memory.
// 2. Size must be known at compile time (for stack arrays).
// 3. Access elements using index [0] to [size-1].
// 4. No bounds checking performs manually.
// ------------------------------------------------------------------

#include <iostream>
using namespace std;

// ------------------------------------------------------------------
// Example 1: Basic Array Declaration and Traversal
void demonstrateArrayBasics() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ------------------------------------------------------------------
// Example 2: Reversing an Array
void demonstrateArrayReverse() {
    int arr[] = {1, 2, 3, 4, 5};
    int N = 5;

    cout << "Original: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    // Logic to reverse array
    for (int i = 0; i < N / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }

    cout << "Reversed: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    cout << "=== Example 1: Array Basics ===" << endl;
    demonstrateArrayBasics();
    cout << endl;

    cout << "=== Example 2: Reversing Array ===" << endl;
    demonstrateArrayReverse();

    return 0;
}
