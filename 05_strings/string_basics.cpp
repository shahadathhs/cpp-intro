// string_basics.cpp (was string_problems.cpp)
// Topic: Strings - Text Manipulation
// ------------------------------------------------------------------
// Important Notes:
// 1. std::string is a dynamic character array.
// 2. Supports concatenation (+), comparison (==), and size().
// 3. Access characters via index: s[i].
// 4. Use <algorithm> for operations like sort() and reverse().
// 5. getline(cin, s) reads a whole line (including spaces).
// ------------------------------------------------------------------

#include <iostream>
#include <string>
#include <algorithm> // for reverse, sort
using namespace std;

// ------------------------------------------------------------------
// Example 1: Basic String Operations
void demonstrateStringBasics() {
    string s1 = "Hello";
    string s2 = "World";
    
    // Concatenation
    string s3 = s1 + " " + s2;
    cout << "Concatenated: " << s3 << endl;

    // Size
    cout << "Length of s3: " << s3.size() << endl;

    // Element access
    cout << "First char: " << s3[0] << ", Last char: " << s3.back() << endl;
}

// ------------------------------------------------------------------
// Example 2: Modifiers (Reverse & Sort)
void demonstrateModifiers() {
    string s = "racecar";
    string original = s;

    // Reverse
    reverse(s.begin(), s.end());
    cout << "Reversed '" << original << "': " << s << endl;

    // Check Palindrome
    if (original == s) {
        cout << " -> It is a palindrome." << endl;
    }

    // Sort
    string text = "banana";
    sort(text.begin(), text.end());
    cout << "Sorted 'banana': " << text << endl;
}

int main() {
    cout << "=== Example 1: String Basics ===" << endl;
    demonstrateStringBasics();
    cout << endl;

    cout << "=== Example 2: String Modifiers ===" << endl;
    demonstrateModifiers();

    return 0;
}
