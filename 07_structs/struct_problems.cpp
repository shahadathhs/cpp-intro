#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Problem: Store N students (name, mark). Sort them by mark descending.

struct Student {
    string name;
    int mark;
};

bool compare(Student a, Student b) {
    if (a.mark == b.mark) return a.name < b.name; // Same mark, alphabetical
    return a.mark > b.mark; // Higher mark first
}

int main() {
    int N;
    // cout << "Enter number of students: ";
    if (!(cin >> N)) return 0;

    Student students[100];
    for(int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].mark;
    }

    sort(students, students + N, compare);

    for(int i = 0; i < N; i++) {
        cout << students[i].name << " " << students[i].mark << endl;
    }

    return 0;
}
