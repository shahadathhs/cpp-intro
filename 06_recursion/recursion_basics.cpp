// recursion_basics.cpp (was recursion_problems.cpp)
// Topic: Recursion - Self-Calling Functions
// ------------------------------------------------------------------
// Important Notes:
// 1. Recursion solves a problem by solving smaller instances of the same problem.
// 2. Base Case: The condition that stops the recursion.
// 3. Recursive Step: The function calling itself with modified arguments.
// 4. Stack Overflow: Happens if base case is missing or unreachable.
// ------------------------------------------------------------------

#include <iostream>
using namespace std;

// ------------------------------------------------------------------
// Example 1: Print N to 1
void printCountdown(int n) {
    // Base Case
    if (n == 0) return;

    cout << n << " ";
    
    // Recursive Step
    printCountdown(n - 1);
}

// ------------------------------------------------------------------
// Example 2: Fibonacci Sequence (Nth number)
// Sequence: 0, 1, 1, 2, 3, 5, 8...
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// ------------------------------------------------------------------
// Example 3: Factorial (N!)
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << "=== Example 1: Countdown (5 to 1) ===" << endl;
    printCountdown(5);
    cout << endl << endl;

    cout << "=== Example 2: Fibonacci (6th number) ===" << endl;
    // 0th=0, 1st=1, 2nd=1, 3rd=2, 4th=3, 5th=5, 6th=8
    cout << "Fibonacci(6): " << fibonacci(6) << endl;
    cout << endl;

    cout << "=== Example 3: Factorial (5!) ===" << endl;
    // 5 * 4 * 3 * 2 * 1 = 120
    cout << "Factorial(5): " << factorial(5) << endl;

    return 0;
}
