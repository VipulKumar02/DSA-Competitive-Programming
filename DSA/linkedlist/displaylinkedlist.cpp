#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void display(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

int main() {
    Node n1 = {10, nullptr};
    Node n2 = {20, nullptr};
    Node n3 = {30, nullptr};

    n1.next = &n2;
    n2.next = &n3;

    Node* head = &n1;

    display(head);
}