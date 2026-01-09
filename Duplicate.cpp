#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;    

    unordered_set<long long> seen;
    for (int i = 0; i < N; ++i) 
    {
        int x;
        cin >> x;
        if (seen.count(x)) 
        {
            cout << "YES\n";    
            return 0;
        }
        seen.insert(x);
    }

    cout << "NO\n";
    return 0;
}
