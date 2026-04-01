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

node* deleteBeforePosition(node* head, int pos) {
    if (!head || pos <= 1) return head;
    if (pos == 2) return deleteFirst(head);
    node* temp = head;
    for (int i = 1; i < pos - 2 && temp->next; i++) temp = temp->next;
    if (temp->next && temp->next->next) {
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
    int n, pos;
    cin >> n;
    node* head = createList(n);

    cin >> pos; // delete before this position
    head = deleteBeforePosition(head, pos);

    printList(head);
}