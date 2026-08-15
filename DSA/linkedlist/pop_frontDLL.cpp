#include<iostream>
using namespace std;

// Node class for Doubly Linked List
class Node{
public:
    int data;      
    Node* next;    
    Node* prev;    

    Node(int val){
        data = val;
        prev = next = nullptr;
    }
};

// Doubly Linked List class
class doublylist{
public:
    Node* head;   
    Node* tail;   

    doublylist(){
        head = tail = nullptr;
    }

    // Insert at end
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->prev = tail;
            newNode->next = NULL;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Delete element from front
    void pop_front(){

        // Case 1: empty list
        if(head == NULL){
            cout << "List is empty\n";
            return;
        }

        // Case 2: only one node
        if(head == tail){
            delete head;          // free memory
            head = tail = NULL;   // list becomes empty
            return;
        }

        // Case 3: more than one node
        Node* temp = head;        // store current head

        head = head->next;        // move head forward

        head->prev = NULL;        // new head should not have prev

        temp->next = NULL;        // break link (good practice)

        delete temp;              // delete old head
    }

    // Print list
    void print(){
        Node* temp = head;

        while(temp != nullptr){
            cout << temp->data << "<=>";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main(){
    doublylist dll;

    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.push_back(4);

    dll.print();

    dll.pop_front();   // delete first node
    dll.print();

    dll.pop_front();   // delete again
    dll.print();

    return 0;
}