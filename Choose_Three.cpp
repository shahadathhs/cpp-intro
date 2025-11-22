#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, sum;
        cin >> N >> sum;

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        bool isPossible = false;

        for (int i = 0; i < N - 2 && !isPossible; i++)
        {
            for (int j = i + 1; j < N - 1 && !isPossible; j++)
            {
                for (int k = j + 1; k < N && !isPossible; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == sum)
                    {
                        isPossible = true;
                    }
                }
                
            }
            
        }

        if (isPossible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
