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

node* deleteLast(node* head) {
    if (!head) return NULL;
    if (!head->next) { delete head; return NULL; }
    node* temp = head;
    while (temp->next->next) temp = temp->next;
    delete temp->next;
    temp->next = NULL;
    return head;
}

void printList(node* head) {
    while (head) { cout << head->data << " "; head = head->next; }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    node* head = createList(n);

    head = deleteLast(head);

    printList(head);
}