#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    if (N == 1) 
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 2; i <= N; i += 2) 
    {
        cout << i << endl;
    }

    return 0;
}
