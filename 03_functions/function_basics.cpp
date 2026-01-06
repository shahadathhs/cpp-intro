// function_basics.cpp (was function_problems.cpp)
// Topic: Functions - Modular Programming
// ------------------------------------------------------------------
// Important Notes:
// 1. Functions break code into reusable blocks.
// 2. Syntax: return_type function_name(parameters) { body }
// 3. 'return' statements send values back to the caller.
// 4. 'void' functions do not return a value.
// 5. Parameters can be passed by value, reference, or pointer.
// ------------------------------------------------------------------

#include <iostream>
using namespace std;

// ------------------------------------------------------------------
// Function Prototypes (Declarations)
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
void greet(string name);

// ------------------------------------------------------------------
// Main Function
int main() {
    cout << "=== Example 1: Void Function ===" << endl;
    greet("User");
    cout << endl;

    cout << "=== Example 2: Return Values ===" << endl;
    int a = 10, b = 5;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Add:      " << add(a, b) << endl;
    cout << "Subtract: " << subtract(a, b) << endl;
    cout << "Multiply: " << multiply(a, b) << endl;
    cout << "Divide:   " << divide(a, b) << endl;

    return 0;
}

// ------------------------------------------------------------------
// Function Definitions

// Simple void function
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

// Basic arithmetic functions
int add(int a, int b) { 
    return a + b; 
}

int subtract(int a, int b) { 
    return a - b; 
}

int multiply(int a, int b) { 
    return a * b; 
}

double divide(int a, int b) { 
    if (b == 0) {
        cout << "Error: Division by zero" << endl;
        return 0.0;
    }
    return (double)a / b; 
}
