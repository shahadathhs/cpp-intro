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

    int x;
    cin >> x;

    while (x != -1) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> x;
    }

    for (Node* curr = head; curr != NULL; curr = curr->next) {
        Node* runner = curr;
        while (runner->next != NULL) {
            if (runner->next->val == curr->val) {
                Node* del = runner->next;
                runner->next = del->next;
                delete del;
            } else {
                runner = runner->next;
            }
        }
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
