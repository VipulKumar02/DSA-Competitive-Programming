#include<iostream>
using namespace std;

// Node class for Doubly Linked List
class Node{
public:
    int data;      // stores value
    Node* next;    // pointer to next node
    Node* prev;    // pointer to previous node

    // Constructor to initialize node
    Node(int val){
        data = val;
        prev = next = nullptr;  // initially both pointers are NULL
    }
};

// Doubly Linked List class
class doublylist{
public:
    Node* head;   // points to first node
    Node* tail;   // points to last node

    // Constructor: initially list is empty
    doublylist(){
        head = tail = nullptr;
    }

    // Insert element at the beginning (front)
    void push_front(int val){
        Node* newNode = new Node(val); // create new node

        // Case 1: if list is empty
        if(head == NULL){
            head = tail = newNode;  // both head and tail point to new node
        }
        else{
            // Step 1: connect new node to current head
            newNode->next = head;

            // Step 2: set prev of new node as NULL (it will be first node)
            newNode->prev = NULL;

            // Step 3: update previous pointer of old head
            head->prev = newNode;

            // Step 4: move head to new node
            head = newNode;
        }
    }

    // Print the list from head to tail
    void print(){
        Node* temp = head;  // start from head

        // Traverse till last node
        while(temp != nullptr){
            cout << temp->data << "<=>"; // print data
            temp = temp->next;           // move forward
        }

        cout << "NULL" << endl; // end of list
    }
};

int main(){
    doublylist dll;

    // inserting elements at front
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.push_front(5);

    // print list
    dll.print();

    return 0;
}