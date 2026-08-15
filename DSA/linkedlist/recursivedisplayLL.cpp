#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

// Recursive display function
void recursivedisplay(Node* head){
    if(head != nullptr){
        cout << head->data << " -> ";
        recursivedisplay(head->next);
    } else {
        cout << "NULL";
    }
}

int main(){
    // Creating nodes
    Node n1 = {8, nullptr};
    Node n2 = {3, nullptr};
    Node n3 = {7, nullptr};
    Node n4 = {12, nullptr};

    // Linking nodes
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = nullptr;

    // Head pointer
    Node* head = &n1;

    // Display list
    recursivedisplay(head);

    return 0;
}