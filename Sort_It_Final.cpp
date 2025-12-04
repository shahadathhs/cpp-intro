#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;

    int total() const {
        return math_marks + eng_marks;
    }
};

bool compare(const Student &a, const Student &b) {
    if (a.total() != b.total()) {
        return a.total() > b.total();
    }
    return a.id < b.id;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    Student arr[105];

    for (int i = 0; i < N; i++) {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr + N, compare);

    for (int i = 0; i < N; i++) {
        cout << arr[i].name << " ";
        cout << arr[i].cls << " ";
        cout << arr[i].sec << " ";
        cout << arr[i].id << " ";
        cout << arr[i].math_marks << " ";
        cout << arr[i].eng_marks << endl;
    }

    return 0;
}
