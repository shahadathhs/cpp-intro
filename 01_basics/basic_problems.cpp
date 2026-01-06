#include <iostream>
#include <algorithm>
using namespace std;

// Problem: Given 3 numbers, find the minimum, maximum, and sum.

int main() {
    int A, B, C;
    // cout << "Enter 3 numbers: ";
    if (!(cin >> A >> B >> C)) return 0;

    int minimum = min({A, B, C});
    int maximum = max({A, B, C});
    int sum = A + B + C;

    cout << minimum << " " << maximum << " " << sum << endl;

    return 0;
}
