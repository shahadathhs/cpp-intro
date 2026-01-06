// vector_basics.cpp
// Topic: Vectors - Dynamic Arrays in C++
// ------------------------------------------------------------------
// Important Notes:
// 1. std::vector is a dynamic array that manages its own memory.
// 2. Elements are stored contiguously, allowing O(1) random access.
// 3. Resizing is automatic but can be costly (O(N)); call reserve() if size is known.
// 4. Common operations: push_back(), pop_back(), size(), clear().
// 5. Iterators provide a way to traverse the vector (begin(), end()).
// ------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm> // for find, replace
using namespace std;

// Function prototypes
void demonstrateInitialization();
void demonstrateCapacity();
void demonstrateModifiers();
void demonstrateElementAccess();
void demonstrateIterators();

int main() {
    // Example 1: Initialization methods
    cout << "=== Example 1: Initialization ===" << endl;
    demonstrateInitialization();
    cout << endl;

    // Example 2: Capacity and size management
    cout << "=== Example 2: Capacity & Size ===" << endl;
    demonstrateCapacity();
    cout << endl;

    // Example 3: Modifying vector content
    cout << "=== Example 3: Modifiers ===" << endl;
    demonstrateModifiers();
    cout << endl;

    // Example 4: Accessing elements
    cout << "=== Example 4: Element Access ===" << endl;
    demonstrateElementAccess();
    cout << endl;

    // Example 5: Using Iterators
    cout << "=== Example 5: Iterators ===" << endl;
    demonstrateIterators();

    return 0;
}

// ------------------------------------------------------------------
// Example 1: Different ways to initialize a vector
void demonstrateInitialization() {
    vector<int> v1;             // Empty vector: {}
    vector<int> v2(5);          // Size 5, default values: {0, 0, 0, 0, 0}
    vector<int> v3(5, 10);      // Size 5, all 10s: {10, 10, 10, 10, 10}
    vector<int> v4(v3);         // Copy of v3
    
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v5(arr, arr + 5); // From array range: {1, 2, 3, 4, 5}

    // Modern C++ list initialization
    vector<int> v6 = {10, 20, 30};

    cout << "v3 created with size 5, value 10." << endl;
    cout << "v5 initialized from array: ";
    for (int x : v5) cout << x << " ";
    cout << endl;
}

// ------------------------------------------------------------------
// Example 2: Understanding Size vs Capacity
void demonstrateCapacity() {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Initial Size: " << v.size() << endl;       // 5
    cout << "Initial Capacity: " << v.capacity() << endl; // Likely 5 or more

    v.resize(3); // Shrinks to {1, 2, 3}
    cout << "Size after resize(3): " << v.size() << endl;

    if (!v.empty()) {
        cout << "Vector is not empty." << endl;
    }

    v.clear(); // Removes all elements
    cout << "Size after clear: " << v.size() << endl;     // 0
    cout << "Capacity after clear: " << v.capacity() << endl; // Remains unchanged
}

// ------------------------------------------------------------------
// Example 3: Adding, removing, and changing elements
void demonstrateModifiers() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Push and Pop
    v.push_back(6); // {1, 2, 3, 4, 5, 6}
    cout << "After push_back(6), last element is: " << v.back() << endl;

    v.pop_back();   // {1, 2, 3, 4, 5}
    cout << "After pop_back(), size is: " << v.size() << endl;

    // Insert (Costly operation O(N))
    v.insert(v.begin() + 1, 100); // {1, 100, 2, 3, 4, 5}
    cout << "Inserted 100 at index 1: " << v[1] << endl;

    // Erase (Costly operation O(N))
    v.erase(v.begin() + 1); // {1, 2, 3, 4, 5}
    cout << "Erased element at index 1." << endl;

    // Algorithms (find, replace)
    replace(v.begin(), v.end(), 2, 200); // {1, 200, 3, 4, 5}
    cout << "Replaced 2 with 200." << endl;
}

// ------------------------------------------------------------------
// Example 4: Accessing elements safely and unsafely
void demonstrateElementAccess() {
    vector<int> v = {10, 20, 30};

    cout << "Front: " << v.front() << endl; // First element
    cout << "Back: " << v.back() << endl;   // Last element
    
    // Indexing (No bounds check)
    cout << "v[0]: " << v[0] << endl;

    // At() (With bounds check, throws exception)
    try {
        cout << "v.at(1): " << v.at(1) << endl;
        // v.at(100); // This would crash with out_of_range
    } catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }
}

// ------------------------------------------------------------------
// Example 5: Iterating through a vector
void demonstrateIterators() {
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Using iterators: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Using found iterator: ";
    auto it = find(v.begin(), v.end(), 3);
    if (it != v.end()) {
        cout << "Found 3 at index: " << (it - v.begin()) << endl;
    } else {
        cout << "3 not found." << endl;
    }
}
