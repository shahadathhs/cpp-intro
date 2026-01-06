#include <iostream>
using namespace std;

// Problem: Create a simple calculator using functions.

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
double divide(int a, int b) { return (double)a / b; }

int main() {
    int a, b;
    char op;
    // cout << "Enter expression (e.g., 5 + 3): ";
    if (!(cin >> a >> op >> b)) return 0;

    if (op == '+') cout << add(a, b) << endl;
    else if (op == '-') cout << subtract(a, b) << endl;
    else if (op == '*') cout << multiply(a, b) << endl;
    else if (op == '/') cout << divide(a, b) << endl;
    else cout << "Invalid operator" << endl;

    return 0;
}
