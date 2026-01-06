#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    Student arr[105];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].id;
    }
    
    for (int i = 0, j = N -1; i < j; i++, j--)
    {
        swap(arr[i].sec, arr[j].sec);
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << arr[i].name << " ";
        cout << arr[i].cls << " ";
        cout << arr[i].sec << " ";
        cout << arr[i].id << endl;
    }

    return 0;
}
