#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string S, X;
        cin >> S >> X;

        string result = "";

        for (size_t i = 0; i < S.size();)
        {
            if (S.substr(i, X.size()) == X)
            {
                result += "#";
                i += X.size();
            }
            else
            {
                result += S[i];
                i++;
            }
        }

        cout << result << endl;
        
    }

    return 0;
}
