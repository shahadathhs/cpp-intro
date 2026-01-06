#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    bool found = false;

    while (ss >> word) 
    {
        if (word == "Jessica") 
        {
            found = true;
            break;
        }
    }

    if (found) 
    {
        cout << "YES\n";
    } 
    else 
    {
        cout << "NO\n";
    }

    return 0;
}
