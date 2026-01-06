#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Problem: Find the median of an array of N integers.

int main() {
    int N;
    // cout << "Enter size: ";
    if (!(cin >> N)) return 0;

    vector<int> v(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (N % 2 == 1) {
        cout << v[N / 2] << endl;
    } else {
        // Average of two middle elements
        double median = (v[N / 2 - 1] + v[N / 2]) / 2.0;
        cout << median << endl;
    }

    return 0;
}
