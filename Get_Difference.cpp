#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    long long val;
    Node* next;
    
    Node(long long val) {
        this->val = val;
        this->next = nullptr;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Node* head = NULL;
    Node* tail = NULL;

    long long x;
    cin >> x;

    while (x != -1) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> x;
    }

    if (head == NULL || head->next == NULL) {
        cout << 0;
        return 0;
    }

    long long min = head->val;
    long long max = head->val;

    Node* current = head->next;
    while (current != NULL) {
        if (current->val < min) {
            min = current->val;
        }
        if (current->val > max) {
            max = current->val;
        }
        current = current->next;
    }

    cout << max - min;

    return 0;
}
