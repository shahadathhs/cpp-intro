#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string currentLine;

    while (getline(cin, currentLine))
    {
        string currentLineLetters;

        for (size_t i = 0; i < currentLine.size(); i++)
        {
            if (currentLine[i] != ' ')
            {
                currentLineLetters += currentLine[i];
            }
        }

        sort(currentLineLetters.begin(), currentLineLetters.end());

        cout << currentLineLetters << endl;
    }
    

    return 0;
}
