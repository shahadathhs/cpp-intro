#include <iostream>
#include <vector>
#include <algorithm> // for find, replace
using namespace std;

int main() {
    // 1. Initialization
    vector<int> v1;             // O(1)
    vector<int> v2(5);          // O(N) -> {0, 0, 0, 0, 0}
    vector<int> v3(5, 10);      // O(N) -> {10, 10, 10, 10, 10}
    vector<int> v4(v3);         // O(N) -> Copy of v3
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v5(arr, arr+5); // O(N) -> {1, 2, 3, 4, 5}

    cout << "v5 initialized from array: ";
    for(int x : v5) cout << x << " ";
    cout << endl;

    // 2. Capacity
    cout << "Size: " << v5.size() << endl;
    cout << "Capacity: " << v5.capacity() << endl;
    cout << "Max Size: " << v5.max_size() << endl;
    
    v5.resize(3); // Reduces to {1, 2, 3}
    cout << "Size after resize(3): " << v5.size() << endl;
    
    if(!v5.empty()) cout << "Vector is not empty." << endl;

    v5.clear();
    cout << "Size after clear: " << v5.size() << endl; // 0

    // Refill for Modifiers
    v5 = {1, 2, 3, 4, 5}; 

    // 3. Modifiers
    v5.push_back(6); // {1, 2, 3, 4, 5, 6}
    v5.pop_back();   // {1, 2, 3, 4, 5}
    
    // Insert 100 at index 1 (requires iterator)
    v5.insert(v5.begin() + 1, 100); // {1, 100, 2, 3, 4, 5}
    
    // Erase element at index 1
    v5.erase(v5.begin() + 1);       // {1, 2, 3, 4, 5}

    // Replace (algorithm)
    replace(v5.begin(), v5.end(), 2, 200); // {1, 200, 3, 4, 5}
    
    // Find (algorithm)
    auto it = find(v5.begin(), v5.end(), 3);
    if(it != v5.end()) cout << "Found 3 at index: " << (it - v5.begin()) << endl;

    // 4. Element Access
    cout << "Front: " << v5.front() << endl; // 1
    cout << "Back: " << v5.back() << endl;   // 5
    cout << "v[0]: " << v5[0] << endl;
    cout << "v.at(0): " << v5.at(0) << endl;

    // 5. Iterators
    cout << "Iterating using iterators: ";
    for(auto i = v5.begin(); i != v5.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
