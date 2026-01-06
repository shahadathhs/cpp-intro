// pointer_basics.cpp (was pointer_problems.cpp)
// Topic: Pointers - Memory Addresses and Indirection
// ------------------------------------------------------------------
// Important Notes:
// 1. A pointer stores the memory address of another variable.
// 2. The `&` operator retrieves the address of a variable.
// 3. The `*` operator (dereference) accesses the value at the pointer's address.
// 4. Pointers allow pass-by-reference semantics in functions (e.g., swap).
// ------------------------------------------------------------------

#include <iostream>
using namespace std;

// ------------------------------------------------------------------
// Example 1: Basic Pointer Declaration and Dereferencing
void demonstratePointerBasics() {
    int val = 42;
    int* ptr = &val; // ptr holds the address of val

    cout << "Value of val: " << val << endl;
    cout << "Address of val (&val): " << &val << endl;
    cout << "Value of ptr (address): " << ptr << endl;
    cout << "Dereferenced ptr (*ptr): " << *ptr << endl;

    // Changing via pointer
    *ptr = 100;
    cout << "New value of val after *ptr = 100: " << val << endl;
}

// ------------------------------------------------------------------
// Example 2: Pass by Pointer (Swapping)
void swapPointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void demonstratePassByPointer() {
    int x = 10, y = 20;
    cout << "Before swap: x=" << x << ", y=" << y << endl;

    swapPointers(&x, &y);

    cout << "After swap:  x=" << x << ", y=" << y << endl;
}

int main() {
    cout << "=== Example 1: Pointer Basics ===" << endl;
    demonstratePointerBasics();
    cout << endl;

    cout << "=== Example 2: Pass by Pointer ===" << endl;
    demonstratePassByPointer();

    return 0;
}
