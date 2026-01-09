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

void insert_head(Node* &head, Node* &tail, long long val) {
    Node* newNode = new Node(val);
    
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insert_tail(Node* &head, Node* &tail, long long val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_index(Node* &head, Node* &tail, long long index) {
    if (head == NULL) return;
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) tail = NULL;
        return;
    }
    Node* current = head;
    for (long long i = 0; i < index - 1 && current->next != NULL; i++) {
        current = current->next;
    }
    if (current->next != NULL) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
        if (current->next == NULL) tail = current;
    }
}

void print_list(Node* head){
    Node* current = head;
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;
    
    while (Q--) {
        int X;
        long long V;
        cin >> X >> V;

        if (X == 0) {
            insert_head(head, tail, V);
        } 
        else if (X == 1) {
            insert_tail(head, tail, V);
        } 
        else if (X == 2) {
            delete_index(head, tail, V);
        }

        print_list(head);
    }

    return 0;
}
