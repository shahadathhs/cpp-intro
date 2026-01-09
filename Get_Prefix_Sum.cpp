#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    long long prefix[N];
    long long sum = 0;

    for(int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        sum += x;
        prefix[i] = sum;
    }

    for(int i = N -1; i >= 0; i--) {
        cout << prefix[i] << " ";
    }
    cout << "\n";

    return 0;
}
