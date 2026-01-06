// basics_reference.cpp
// Topic: C++ Basics (I/O, Conditionals, Loops)
// ------------------------------------------------------------------
// Important Notes:
// 1. Structure: #include > main() > return 0;
// 2. I/O: cin (input), cout (output), endl (newline).
// 3. Conditionals: if, else if, else, switch.
// 4. Loops: for (count controlled), while (condition controlled).
// 5. Fast I/O: ios::sync_with_stdio(false); cin.tie(nullptr);
// ------------------------------------------------------------------

#include <iostream>
#include <algorithm>
using namespace std;

// ------------------------------------------------------------------
// Example 1: Input/Output and Arithmetic
void demonstrateIO() {
    int a = 10, b = 20;
    cout << "A: " << a << ", B: " << b << endl;
    cout << "Sum: " << (a + b) << endl;
    cout << "Min: " << min(a, b) << endl;
}

// ------------------------------------------------------------------
// Example 2: Conditionals
void demonstrateConditionals(int n) {
    if (n > 0) {
        cout << n << " is positive." << endl;
    } else if (n < 0) {
        cout << n << " is negative." << endl;
    } else {
        cout << n << " is zero." << endl;
    }
}

// ------------------------------------------------------------------
// Example 3: Loops (Print even numbers up to N)
void demonstrateLoops(int n) {
    cout << "Even numbers up to " << n << ": ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    // Fast I/O optimization
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "=== Example 1: I/O ===" << endl;
    demonstrateIO();
    cout << endl;

    cout << "=== Example 2: Conditionals ===" << endl;
    demonstrateConditionals(10);
    demonstrateConditionals(-5);
    cout << endl;

    cout << "=== Example 3: Loops ===" << endl;
    demonstrateLoops(10);

    return 0;
}
