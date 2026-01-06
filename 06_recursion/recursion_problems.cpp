#include <iostream>
using namespace std;

// Problem: Find the Nth Fibonacci number using recursion.
// 0 1 1 2 3 5 8 ...

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N;
    // cout << "Enter N: ";
    if (!(cin >> N)) return 0;

    cout << fibonacci(N) << endl;

    return 0;
}
