#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node* insertLast(node* head, int val) {
    node* newnode = new node();
    newnode->data = val;
    newnode->next = NULL;

    if (!head) return newnode;

    node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newnode;
    return head;
}

node* insertFirst(node* head, int val) {
    node* newnode = new node();
    newnode->data = val;
    newnode->next = head;
    return newnode;
}

node* insertAtPosition(node* head, int val, int pos) {
    if (pos == 1) return insertFirst(head, val);

    node* temp = head;
    for (int i = 1; i < pos - 1 && temp; i++)
        temp = temp->next;

    if (temp) {
        node* newnode = new node();
        newnode->data = val;
        newnode->next = temp->next;
        temp->next = newnode;
    } else {
        cout << "Invalid position\n";
    }

    return head;
}

void printList(node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        head = insertLast(head, x);
    }

    int val, pos;
    cin >> val >> pos;

    head = insertAtPosition(head, val, pos);
    printList(head);
}