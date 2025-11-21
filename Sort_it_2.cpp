#include <bits/stdc++.h>
using namespace std;

int * sort_it(int N)
{
    int* arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N, greater<int>());

    return arr;    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int* sorted = sort_it(N);

    for (int i = 0; i < N; i++)
    {
        cout << sorted[i] << " ";
    }
    
    delete[] sorted;

    return 0;
}
