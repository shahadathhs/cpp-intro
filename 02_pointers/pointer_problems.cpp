#include <iostream>
using namespace std;

// Problem: Implement a swap function using pointers.

void swap_pointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    // cout << "Enter two numbers: ";
    if (!(cin >> x >> y)) return 0;

    swap_pointers(&x, &y);

    cout << x << " " << y << endl;

    return 0;
}
