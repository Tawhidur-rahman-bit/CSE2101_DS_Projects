#include <bits/stdc++.h>
using namespace std;

// Node definition for singly linked list
class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {
    int n, x;
    cin >> n;

    node* head = NULL;
    node* tail = NULL;

    // Create singly linked list with n elements
    for (int i = 0; i < n; i++) {
        cin >> x;
        node* newnode = new node(x);

        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Insert a value at the beginning
    int val;
    cin >> val;
    node* newnode = new node(val);
    newnode->next = head;
    head = newnode;

    // Print the linked list
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
