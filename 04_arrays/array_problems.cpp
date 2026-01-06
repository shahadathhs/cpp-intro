#include <iostream>
using namespace std;

// Problem: Reverse an array not using std::reverse

int main() {
    int N;
    // cout << "Enter size: ";
    if (!(cin >> N)) return 0;

    int arr[100]; // Assuming max size 100
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Reverse logic
    for(int i = 0; i < N / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }

    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
