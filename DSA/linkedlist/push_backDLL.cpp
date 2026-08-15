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

    // Insert element at the end (back)
    void push_back(int val){
        Node* newNode = new Node(val); // create new node

        // Case 1: if list is empty
        if(head == NULL){
            head = tail = newNode;  // both head and tail point to new node
        }
        else{
            // Step 1: connect new node with current tail
            newNode->prev = tail;

            // Step 2: new node will be last, so next = NULL
            newNode->next = NULL;

            // Step 3: update next of old tail
            tail->next = newNode;

            // Step 4: move tail to new node
            tail = newNode;
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

    // inserting elements at back
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_back(4);
    dll.push_back(5);

    // print list
    dll.print();

    return 0;
}