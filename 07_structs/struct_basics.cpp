// struct_basics.cpp (was struct_problems.cpp)
// Topic: Structures - Grouping Related Data
// ------------------------------------------------------------------
// Important Notes:
// 1. Structs allow grouping variables of different types under one name.
// 2. Used to represent objects/entities (e.g., Student, Point).
// 3. Can have member functions (Constructor) in C++.
// 4. Access members using the dot operator (.).
// ------------------------------------------------------------------

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// ------------------------------------------------------------------
// Example 1: Defining a Struct
struct Point {
    int x;
    int y;
};

// ------------------------------------------------------------------
// Example 2: More Complex Struct with Constructor
struct Student {
    string name;
    int age;
    int mark;

    // Optional: Constructor for easier initialization
    Student(string n, int a, int m) {
        name = n;
        age = a;
        mark = m;
    }
};

// Comparator for sorting
bool compareStudents(Student a, Student b) {
    if (a.mark == b.mark) return a.name < b.name; // Tie-break: Name A-Z
    return a.mark > b.mark; // Higher mark first
}

void demonstrateStructs() {
    // Basic usage
    Point p1;
    p1.x = 10;
    p1.y = 20;
    cout << "Point: (" << p1.x << ", " << p1.y << ")" << endl;

    // Using Constructor
    Student s1("Alice", 20, 85);
    Student s2("Bob", 21, 92);
    Student s3("Charlie", 20, 85);

    vector<Student> classRoom;
    classRoom.push_back(s1);
    classRoom.push_back(s2);
    classRoom.push_back(s3);

    cout << "\nStudents before sorting:" << endl;
    for(const auto& s : classRoom) {
        cout << "- " << s.name << " (Mark: " << s.mark << ")" << endl;
    }

    // Sort using custom comparator
    sort(classRoom.begin(), classRoom.end(), compareStudents);

    cout << "\nStudents after sorting (Mark Desc, Name Asc):" << endl;
    for(const auto& s : classRoom) {
        cout << "- " << s.name << " (Mark: " << s.mark << ")" << endl;
    }
}

int main() {
    cout << "=== Example 1 & 2: Struct Basics & Sorting ===" << endl;
    demonstrateStructs();

    return 0;
}
