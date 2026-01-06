#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem: Count Elements
// Given a vector of N integers and a query value Q.
// Count how many times Q appears in the vector.

int main() {
    // Example Input:
    // 5
    // 1 2 3 2 4
    // 2
    
    // Example Output:
    // 2

    int N;
    // cout << "Enter number of elements: "; 
    if (!(cin >> N)) return 0;

    vector<int> v(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int Q;
    // cout << "Enter query value: ";
    cin >> Q;

    // Manual Counting
    int count = 0;
    for(int x : v) {
        if(x == Q) count++;
    }
    cout << count << endl;

    // Alternative using algorithm header:
    // int count2 = std::count(v.begin(), v.end(), Q);
    // cout << "Using std::count: " << count2 << endl;

    return 0;
}
