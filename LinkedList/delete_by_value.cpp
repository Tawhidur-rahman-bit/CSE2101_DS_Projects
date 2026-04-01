#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node* createList(int n) {
    node* head = NULL;
    node* tail = NULL;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        node* newnode = new node();
        newnode->data = x;
        newnode->next = NULL;
        if (!head) head = tail = newnode;
        else { tail->next = newnode; tail = newnode; }
    }
    return head;
}

node* deleteFirst(node* head) {
    if (!head) return NULL;
    node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

node* deleteByValue(node* head, int key) {
    if (!head) return NULL;
    if (head->data == key) return deleteFirst(head);
    node* temp = head;
    while (temp->next && temp->next->data != key) temp = temp->next;
    if (temp->next) {
        node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
    return head;
}

void printList(node* head) {
    while (head) { cout << head->data << " "; head = head->next; }
    cout << endl;
}

int main() {
    int n, key;
    cin >> n;
    node* head = createList(n);

    cin >> key; // value to delete
    head = deleteByValue(head, key);

    printList(head);
}