#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int ID;
    string name;
    char section;
    int totalMarks;
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        Student students[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].ID;
            cin >> students[i].name;
            cin >> students[i].section;
            cin >> students[i].totalMarks;
        }

        Student whoIsIt = students[0];
        for (int i = 1; i < 3; i++) 
        {
            if (students[i].totalMarks > whoIsIt.totalMarks) 
            {
                whoIsIt = students[i];
            } 
            else if (students[i].totalMarks == whoIsIt.totalMarks) 
            {
                if (students[i].ID < whoIsIt.ID)
                {
                    whoIsIt = students[i];
                }
            }
        }

        cout << whoIsIt.ID << " ";
        cout << whoIsIt.name << " ";
        cout << whoIsIt.section << " ";
        cout << whoIsIt.totalMarks << endl;
    }
    
    return 0;
}
